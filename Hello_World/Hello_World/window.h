#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QLabel>

class QPushButton;
class Window : public QWidget
{
 Q_OBJECT
 public:
  explicit Window(QWidget *parent = 0);
 private slots:
  void onBtnClicked();
 private:
 QLabel *message;
 QPushButton *button1;
 QPushButton *button2;
};

#endif // WINDOW_H
