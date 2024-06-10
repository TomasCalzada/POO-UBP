#include "ventana.h"

Ventana::Ventana(QWidget *parent) : QWidget(parent)
{
    QGridLayout *layout = new QGridLayout(this);

    urlLineEdit = new QLineEdit(this);
    connect(urlLineEdit, SIGNAL(returnPressed()), this, SLOT(buscarUrl()));
    layout->addWidget(urlLineEdit, 0, 0, 1, 2);

    htmlTextEdit = new QTextEdit(this);
    htmlTextEdit->setReadOnly(true);
    layout->addWidget(htmlTextEdit, 1, 0, 1, 2);

    manager = new QNetworkAccessManager(this);
}

void Ventana::buscarUrl()
{
    QUrl url(urlLineEdit->text());
    QNetworkRequest request(url);
    QNetworkReply *reply = manager->get(request);

    connect(reply, SIGNAL(finished()), this, SLOT(procesarRespuesta()));
}

void Ventana::procesarRespuesta()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if (reply)
    {
        if (reply->error() == QNetworkReply::NoError)
        {
            htmlTextEdit->setPlainText(reply->readAll());
        }
        else
        {
            htmlTextEdit->setPlainText("Error al cargar la URL: " + reply->errorString());
        }
        reply->deleteLater();
    }
}
