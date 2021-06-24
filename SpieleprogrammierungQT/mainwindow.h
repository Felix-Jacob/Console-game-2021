#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "game.h"
#include "player.h"

#include <QMainWindow>
#include <comunicazionhendler.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Send_clicked();

    void on_lineEdit_returnPressed();
    void dotext();
    void on_lineEdit_upPressed();
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

private:
    Game game;
    Ui::MainWindow *ui;
    comunicazionhendler *mComunicazionhdendler;
};
#endif // MAINWINDOW_H
