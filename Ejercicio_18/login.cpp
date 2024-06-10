#include "login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Inicio de Sesión");
    setGeometry(200, 200, 300, 150);

    QGridLayout *layout = new QGridLayout(this);

    lUsuario = new QLabel("Usuario:", this);
    leUsuario = new QLineEdit(this);
    lClave = new QLabel("Contraseña:", this);
    leClave = new QLineEdit(this);
    leClave->setEchoMode(QLineEdit::Password);

    layout->addWidget(lUsuario, 0, 0);
    layout->addWidget(leUsuario, 0, 1);
    layout->addWidget(lClave, 1, 0);
    layout->addWidget(leClave, 1, 1);

    pbValidar = new QPushButton("Validar", this);
    layout->addWidget(pbValidar, 2, 0, 1, 2);
    connect(pbValidar, SIGNAL(pressed()), this, SLOT(validarUsuario()));

    connect(leClave, SIGNAL(returnPressed()), pbValidar, SLOT(click()));
}

Login::~Login()
{
}

void Login::validarUsuario()
{
    if (leUsuario->text() == "admin" && leClave->text() == "1234")
    {
        qDebug() << "Usuario válido";
        Ventana *ventana = new Ventana();
        ventana->show();
        this->close();
    }
    else
    {
        qDebug() << "Usuario inválido";
        leClave->clear();
    }
}
