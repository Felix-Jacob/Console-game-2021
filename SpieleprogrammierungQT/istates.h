#ifndef ISTATES_H
#define ISTATES_H

#include <QObject>


class IStates : public QObject
{
    Q_OBJECT
public:
    virtual ~IStates() {};
    virtual void ExecuteCommand(QString command) {};
    virtual void PrintMenu() {};
};

#endif // ISTATES_H
