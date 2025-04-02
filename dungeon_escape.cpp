#include <iostream>
using namespace std;

void startGame();
void exploreLeft();
void exploreRight();
void exploreCenter();

int main() 
{
    cout << "Welcome to 'Dungeon Escape'!" << endl;
    cout << "You wake up and find yourself in a dark room with no memories of who you are and how you got there." << endl;
    cout << "The only thing you do know, is that no matter what, you must escape." << endl;
    startGame();
    return 0;
}

void startGame()
{
    int choice;
    cout << "You leave the room and walk down the hall. You see three paths ahead; \n1. Left\n2. Right\n3. Center\nChoose a path (1, 2, or 3): ";
    cin >> choice;

    while (cin.fail() || (choice != 1 && choice != 2 && choice != 3))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! Choose between 1, 2, or 3: ";
        cin >> choice;
    }

    if (choice == 1)
    {
        exploreLeft();
    }
    else if (choice == 2) 
    {
        exploreRight();
    }
    else
    {
        exploreCenter();
    }
}

void exploreLeft()
{
    cout << "You enter a massive cavern and in the middle of the space lies a sleeping dragon!" << endl;
    cout << "What action will you take?\n1. Surprise attack the dragon\n2. Sneak past it" << endl;
    int action;
    cin >> action;

    while (cin.fail() || (action != 1 && action != 2))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! Choose between 1 or 2: ";
        cin >> action;
    }

    switch (action)
    {
        case 1: 
            cout << "You foolishly attack the dragon. The dragon awakes and you are reduced to cinders by its flame breath.\nYOU DIED" << endl;
            break;
        case 2:
            cout << "You attempt to sneak past the dragon. You make too much noise and are reduced to cinders by its flame breath.\nYOU DIED" << endl;
            break;
    }
}

void exploreRight()
{
    cout << "You enter a small room, but the door shuts behind you and the room fills with poison gas.\nYOU DIED" << endl;
}

void exploreCenter() 
{
    cout << "You step forward and find three doors in front of you." << endl;
    cout << "The first door is glowing red and radiates extreme heat, burning you when you get close." << endl;
    cout << "The second door has a dim glow of green and an awful stench. Being near the door makes you feel nauseous." << endl;
    cout << "The third door is a glowing gold that makes you feel warm inside, like a sense of longing." << endl;
    cout << "Choose a door:\n1. Red Door\n2. Green Door\n3. Gold Door" << endl;
    int doorChoice;
    cin >> doorChoice;

    while (cin.fail() || (doorChoice != 1 && doorChoice != 2 && doorChoice != 3)) 
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid choice! Choose 1, 2, or 3: ";
        cin >> doorChoice;
    }

    switch (doorChoice) 
    {
        case 1:
            cout << "You open the first door and are instantly vaporized.\nYOU DIED!" << endl;
            break;
        case 2:
            cout << "You open the green door and are hit by a poison cloud and start melting.\nYOU DIED!" << endl;
            break;
        case 3:
            cout << "You open the gold door and you are hit by a ray of sunlight. You have found an exit.\nYOU LIVE!" << endl;
            break;
    }
}