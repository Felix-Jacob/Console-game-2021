#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "game.h"
#include "player.h"
#include "states.h"
#include "istates.h"

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

public slots:
    void PrintOntoConsole(QString newLine);
    void SetGame(Game* game);
    void UpdatePositionInUi(Field* newField, QString lastFieldId);
    void UpdateUiinventarsuptrakt(QString itemName, Inventory* inventory);
    void UpdateUiinventaradd(QString itemName, Inventory* inventory);
    void DeleteLastLine();
    void UpdateButtonImage(QString imageName, QString buttonName);

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

    void muveuser(QString);
    void discoverUimap(QString);
    void on_tableWidget_cellClicked(int row, int column);
    void on_tableWidget_2_cellPressed(int row, int column);

signals:
    void receivedCommand(QString command);
    void newGameStateRequest();
    void initialLoadStateRequest();
    void printItemDescriptionRequest(QString itemName);

private:
    Game* mGame;
    IStates* currentState;
    Ui::MainWindow *ui;
    comunicazionhendler *mComunicazionhdendler;
    void PrintSystemBoot(bool newGame);
};
#endif // MAINWINDOW_H
