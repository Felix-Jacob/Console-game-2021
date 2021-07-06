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

    void WriteLine(QString newLine);
    void UpdatePositionInUi(QString oldPosition, QString newPosition);

private slots:
    void on_Send_clicked();

    void on_lineEdit_returnPressed();

    void dotext();

    void on_lineEdit_upPressed();

    void on_pushButton_newgame_clicked();

    void on_pushButton_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_pushButton_titel_clicked();

    void on_pushButton_leave_clicked();

    void on_pushButton_help_clicked();

    void on_downbutton_clicked();

    void on_upbutton_clicked();

<<<<<<< HEAD
    void muveuser(QString);
    void discoverUimap(QString);
    void UpdatePositionInUi(QString, QString);
    void UpdateUiinventaradd();
    void UpdateUiinventarsuptrakt();
=======
>>>>>>> 3a58d99d297d3c61ac926444af2b8ee00544fc6e
    void on_tableWidget_cellClicked(int row, int column);

    void on_tableWidget_2_cellPressed(int row, int column);

private:
    Game mGame;
    Ui::MainWindow *ui;
    comunicazionhendler *mComunicazionhdendler;
};
#endif // MAINWINDOW_H
