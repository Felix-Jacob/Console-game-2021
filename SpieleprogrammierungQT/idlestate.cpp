#include "idlestate.h"
#include <QDebug>

IdleState::IdleState()
{

}


void IdleState::ExecuteCommand(QString command)
{
    if(command == "w") {
        emit moveRequest("up");
    }
    else if(command == "s") {
        emit moveRequest("down");
    }
    else if(command == "a") {
        emit moveRequest("left");
    }
    else if(command == "d") {
        emit moveRequest("right");
    }
    else if(command =="p") {
        emit changeStateRequest("pickUpState");
    }
    else if(command =="l") {
        emit descriptionRequest();
    }
    else if(command == "r") {
        emit changeStateRequest("dropState");
    }
    else if(command == "sg") {
        emit changeStateRequest("saveGameState");
    }
    else if(command == "sp") {
        emit setSavePointRequest();
    }
    else if(command == "f") {
        emit changeStateRequest("fastTravelState");
    }
    else if(command == "c") {
        emit changeStateRequest("combineItemsState");
    }
    else if(command == "u") {
        emit changeStateRequest("useItemState");
    }
    else if(command == "lg") {
        emit changeStateRequest("loadGameState");
    }
    else {
        emit issueConsoleOutput("I'm sorry i can't find a function for your command");
    }
};


void IdleState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");

    QString* spacerLeft = new QString(5, ' ');
    QString menu = "Please select an option: \n" +
                             *spacerLeft + "w:  Move up              l:  Inspect environment\n" +
                             *spacerLeft + "s:  Move down            p:  Pick up item\n" +
                             *spacerLeft + "a:  Move left            r:  Drop item\n" +
                             *spacerLeft + "d:  Move right           sg: SaveGame\n" +
                             *spacerLeft + "f:  Fast-Travel          sp: Set Savepoint\n" +
                             *spacerLeft + "c:  Combine items        u:  Use item\n" +
                             *spacerLeft + "lg: Load Game";

    emit issueConsoleOutput(menu);
}
