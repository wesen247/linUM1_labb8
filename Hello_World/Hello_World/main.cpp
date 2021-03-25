#include <QApplication>
#include <QProgressBar>
#include <QSlider>
#include "window.h"

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 //QWidget window;
 //window.setFixedSize(465, 300);

 Window window;

 QProgressBar *progressBar = new QProgressBar(&window);
 progressBar->setRange(0, 100);
 progressBar->setValue(0);
 progressBar->setGeometry(15, 225, 450, 45);

 QSlider *slider = new QSlider(&window);
 slider->setOrientation(Qt::Horizontal);
 slider->setRange(0, 100);
 slider->setValue(0);
 slider->setGeometry(120, 279, 240, 15);

 window.show();

 QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));

 return app.exec();
}
