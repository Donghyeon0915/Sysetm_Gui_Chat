/*
 * Donghyeon 20183188
 */

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class QTcpSocket;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void readyRead();                   // Receive the message from Server
    void connected();                   // If Client Connected Notify to Server
    void on_connectButton_clicked();    // ConnetBtn Click Event
    void on_sendButton_clicked();       // SendMessageBtn Click Event

    void on_messageLineEdit_returnPressed();

private:
    Ui::Widget *ui;
    QTcpSocket* socket; //My Socket
};

#endif // WIDGET_H
