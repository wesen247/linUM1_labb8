#include "window.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>


Window::Window(QWidget *parent) :
 QWidget(parent)
 {
    setFixedSize(480, 300);

    QFont font1("Courier");
    font1.setBold(true);
    font1.setPointSize(12);

    QFont font2("Arial");
    font2.setBold(true);
    font2.setPointSize(24);

    QIcon icon1 ("/home/user/uppg8/Hello_World/icons/dont.png");
    QIcon icon2 ("/home/user/uppg8/Hello_World/icons/click.png");

    button1 = new QPushButton("Don't click me!", this);
    button1->setToolTip("You probably shouldn't...");
    button1->setCheckable(true);
    button1->setFont(font1);
    button1->setGeometry(15, 15, 210, 90);
    button1->setIcon(icon1);
    button1->setIconSize(QSize(30, 30));

    button2 = new QPushButton("Close application", this);
    button2->setToolTip("This one feels about right...");
    button2->setFont(font1);
    button2->setGeometry(255, 15, 210, 90);
    button2->setIcon(icon2);
    button2->setIconSize(QSize(30, 30));

    connect(button1, SIGNAL(clicked()), this, SLOT(onBtnClicked()));
    connect(button2, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));

    message = new QLabel(this);
    message->setGeometry(150, 90, 210, 150);
    message->setFont(font2);
    message->setStyleSheet("QLabel { color : red; }");

    }

    void Window::onBtnClicked()
     {
         button1->setText("I told you not to!");
         message->setText("BAD USER!!!");
     }


