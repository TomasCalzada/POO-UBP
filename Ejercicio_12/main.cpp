#include <QApplication>
#include <QLabel>
#include <QImage>
#include <QTimer>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLabel label;

    QImage image("C:/Users/tomas/OneDrive/Documents/Facultad/SEMESTRE 5/POO/Ejercicio_12/T.jpeg");
    if (image.isNull()) {
        qWarning("No se pudo cargar la imagen.");
        return -1;
    }

    label.setPixmap(QPixmap::fromImage(image));
    label.setFixedSize(image.size());
    label.showMaximized();

    QTimer::singleShot(3000, &app, SLOT(quit()));

    return app.exec();
}
