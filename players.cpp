#include <iostream>

using namespace std;

int main () {

    struct soccer {
    int playerNumber; 
    int playerNumber2;
    float topSpeed;
    float topSpeed2;
    };

    enum playerPosition { goalkeeper, midfielder, striker, winger, defender};

    char position1, position2;

    soccer s;

    cout << "Enter player 1 number" << endl;
    cin >> s.playerNumber;
    cout << "Enter player 1 top speed in miles per h (only input miles)" << endl;
    cin >> s.topSpeed;
    cout << "Enter player 1 position type with first letter of position example: striker = s" << endl;
    cin >> position1;
    cout << "\n" << "\n";
    cout << "Enter player 2 number" << endl;
    cin >> s.playerNumber2;
    cout << "Enter player 2 top speed in miles per h (only input miles)" << endl;
    cin >> s.topSpeed2;
    cout << "Enter player 2 position type with first letter of position example: striker = s" << endl;
    cin >> position2;

    cout << "player1 number:" << s.playerNumber << "|  player1 top speed:" << s.topSpeed << "|  player1 position:" << position1 <<  endl;
    cout << "player2 number:" << s.playerNumber2 << "|  player2 top speed:" << s.topSpeed2 << "|  player1 position:" << position2 << endl;

    return 0;
}