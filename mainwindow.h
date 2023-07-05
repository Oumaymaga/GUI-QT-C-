#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void action_increment();
    void action_decrement();
    void action_timer();

private:
    Ui::MainWindow *ui;
    int counter;
    QTimer *timer;
};
#endif // MAINWINDOW_H
