#include "game.h"
#include "gameboard.h"
#include "player.h"
#include "testhelper.h"
#include <QtDebug>
#include <item.h>
#include <item.h>
//#include <QtWarning>

Player::Player()
{

}

void Player::Write(QJsonObject &json)
{
    json["name"] = Player::Name;
    json["currentFieldId"] = Player::CurrentField->Id;

    QJsonArray inventarArray;

    for(Item &item : mInventory.CollectedItems) // TODO: implement this elegant way into your other methods as well
    {
       QJsonObject itemObject;
       item.Write(itemObject);
       inventarArray.append(itemObject);
    }

    json["inventory"] = inventarArray;
}

void Player::Read(const QJsonObject &json)
{
    Player::Name = json["name"].toString();
    QJsonArray itemArray = json["inventory"].toArray();
    for(int i=0; i<itemArray.size(); i++)
    {
        QJsonObject itemObject = itemArray[i].toObject();
        Item item;
        item.Read(itemObject);
        Player::mInventory.CollectedItems.append(item);
    }
    TestHelper testHelper;
    testHelper.PrintQList(Player::mInventory.CollectedItems);

    CurrentField = Game::mGameBoard.GetField(json["currentFieldId"].toString());
    qDebug() << "Created player and put them onto Field: " << CurrentField->Id;
}


void Player::Move(QString direction) // Done!
{
    if(direction == "forward"){
        if(QString::compare(CurrentField->FieldForward, "x") != 0)
        {
            CurrentField = Game::mGameBoard.GetField(CurrentField->FieldForward);
            qDebug() << "Moved Forward to field " << CurrentField->Id;
        }
        else
        {
            qDebug() << "Can't move into that direction";
        }
    }

    if(direction == "backward"){
        if(QString::compare(CurrentField->FieldBackward, "x") != 0)
        {
            CurrentField = Game::mGameBoard.GetField(CurrentField->FieldBackward);
            qDebug() << "Moved Backward to field " << CurrentField->Id;
        }
        else
        {
            qDebug() << "Can't move into that direction";
        }
    }
}


void Player::PickUpItemOfType(QString itemType) // Done!
{
    for(int i = 0; i < CurrentField->Items.size(); i++)
    {
        if(CurrentField->Items[i].Name == itemType)
        {
            mInventory.CollectedItems.append(CurrentField->Items[i]);
            CurrentField->Items.removeAt(i);
            qDebug() << "Picked up item";
            return;
        }
    }
    qDebug() << "Item not found on field";
}

void Player::PickUpMultipleItemsOfType(QString itemType, int numberOfItems) { // Done!
    int i = 0;
    while (i != CurrentField->Items.size())
    {
        if(CurrentField->Items[i].Name == itemType)
        {
            mInventory.CollectedItems.append(CurrentField->Items[i]);
            CurrentField->Items.removeAt(i);
            numberOfItems -= 1;
            qDebug() << "Picked up item";
            if(numberOfItems == 0) {
                return;
            }
            i = 0;
        }
        i += 1;
    }

    if(numberOfItems > 0)
    {
        qDebug() << "Not enough items were available";
    }
}

void Player::PickUpAllItemsOfType(QString itemType) // Done!
{
    bool itemTypeAvailable = false;
    int i = 0;

    while (i != CurrentField->Items.size())
    {
        if(CurrentField->Items[i].Name == itemType)
        {
            mInventory.CollectedItems.append(CurrentField->Items[i]);
            CurrentField->Items.removeAt(i);
            qDebug() << "Picked up item";

            itemTypeAvailable = true;
            i = 0;
        }
        i += 1;
    }

    if(itemTypeAvailable == false)
    {
        qDebug() << "itemType not available on field";
    }
}


void Player::DropItemOfType(QString itemType) // Done!
{
    for(int i=0; i<mInventory.CollectedItems.size(); i++)
    {
        Item item = mInventory.CollectedItems[i];
        if(item.Name == itemType)
        {
            mInventory.CollectedItems.removeAt(i);
            CurrentField->Items.append(item);
            qDebug() << "Dropped item";
            return;
        }
    }
    qDebug() << "Item not found in inventory";
}

void Player::DropMultipleItemsOfType(QString itemType, int numberOfItems) // Done!
{
    int i = 0;
    while (i != mInventory.CollectedItems.size())
    {
        if(mInventory.CollectedItems[i].Name == itemType)
        {
            CurrentField->Items.append(mInventory.CollectedItems[i]);
            mInventory.CollectedItems.removeAt(i);
            numberOfItems -= 1;
            qDebug() << "Dropped item";
            if(numberOfItems == 0) {
                return;
            }
            i = 0;
        }
        i += 1;
    }

    if(numberOfItems > 0)
    {
        qDebug() << "Not enough items were available";
    }
}

void Player::DropAllItemsOfType(QString itemType) // Done!
{
    bool itemTypeAvailable = false;
    int i = 0;

    while (i != mInventory.CollectedItems.size())
    {
        if(mInventory.CollectedItems[i].Name == itemType)
        {
            CurrentField->Items.append(mInventory.CollectedItems[i]);
            mInventory.CollectedItems.removeAt(i);
            qDebug() << "Dropped item";
            itemTypeAvailable = true;
            i = 0;
        }
        i += 1;
    }

    if(itemTypeAvailable == false)
    {
        qDebug() << "ItemType is not available in inventory";
    }
}


void Player::ListAvailableItems() // Done!
{
   if(Player::CurrentField->Items.length() == 0)
       qDebug() << "There are no items on this field";
   else
   {
       for(int i = 0; i<Player::CurrentField->Items.length(); i++)
       {
           qDebug() << "Found Item: " << Player::CurrentField->Items[i].Name;
       }
   }
}

void Player::GetFieldDescription() // Done!
{
    qDebug() << "Field Description: " << Player::CurrentField->Description;

}
