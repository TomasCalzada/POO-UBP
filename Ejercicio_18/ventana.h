#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QTextEdit>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>

class Ventana : public QWidget
{
    Q_OBJECT
public:
    explicit Ventana(QWidget *parent = nullptr);

private slots:
    void buscarUrl();
    void procesarRespuesta();

private:
    QLineEdit *urlLineEdit;
    QTextEdit *htmlTextEdit;
    QNetworkAccessManager *manager;
};

#endif // VENTANA_H
