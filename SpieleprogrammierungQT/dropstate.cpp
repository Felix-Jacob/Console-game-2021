#include <QDebug>
#include "dropstate.h"

DropState::DropState()
{

}

void DropState::ExecuteCommand(QString command)
{
   if(command != "b") {
       QStringList splittedCommand = command.split(' ');
       if(splittedCommand.length() == 1) {
           emit dropOneRequest(splittedCommand[0]);
       }
       else if(splittedCommand.length() == 2) {
           if(splittedCommand[1] == "all") {
               emit dropAllRequest(splittedCommand[0]);
           }
           else {
               bool isInt;
               int amount = splittedCommand[1].toInt(&isInt);
               if(isInt) {
                   emit dropManyRequest(splittedCommand[0], amount);
               }
               else {
                   emit issueConsoleOutput("I'm sorry i can't find a function for your command");
               }
           }
       }
       else {
           emit issueConsoleOutput("I'm sorry i can't find a function for your command");
       }
   }

   emit changeStateRequest("idleState");
};

void DropState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");

    QString menu = "Select the item that you want to drop.\n   Specify the amount or type 'all'.";
    emit listInventoryRequest();
    emit issueConsoleOutput(menu);
    emit issueConsoleOutput("b: Return into main-menu");

}
