//EJERCICIO 19.
//Crear una clase Pintura que herede de QWidget y que permita dibujar a mano alzada con el mouse.
//Con el scroll permitirá ampliar y disminuir el tamaño del trazo del pincel.
//Con las teclas R, G y B se cambia el color del pincel.
//Con Escape se borra todo lo que esté dibujado.


#ifndef PINTURA_H
#define PINTURA_H

#include <QWidget>
#include <QPoint>
#include <QVector>

class Pintura : public QWidget {
    Q_OBJECT

public:
    Pintura(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;

private:
    struct PointWithColor {
        QPoint point;
        QColor color;
        int penWidth; // Agregar el miembro penWidth para almacenar el ancho del lápiz
    };

    QVector<PointWithColor> path;
    QColor penColor;
    int penWidth;
};

#endif // PINTURA_H
