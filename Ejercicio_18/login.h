#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QDebug>
#include "ventana.h"

class Login : public QWidget
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void validarUsuario();

private:
    QLabel *lUsuario;
    QLineEdit *leUsuario;
    QLabel *lClave;
    QLineEdit *leClave;
    QPushButton *pbValidar;
};

#endif // LOGIN_H
