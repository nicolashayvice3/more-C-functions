#include <iostream>

using namespace std;

int main () {

    struct soccer {
    int playerNumber;
    int playerNumber2;
    float topSpeed;
    float topSpeed2;
    } ;

    struct soccer p1 = { 0, 0, 0, 0 };
    struct soccer* p2 = &p1;

    int player1 = 0;

    int player2 = 0;

    enum playerPosition { goalkeeper, midfielder, striker, winger, defender};

    cout << "Enter player 1 number" << endl;
    cin >> p2->playerNumber;
    cout << "Enter player 1 top speed in miles per h (only input miles)" << endl;
    cin >> p2->topSpeed;
    cout << "Enter player 1 position type with first letter of position example: striker = s" << endl;
    cin >> player1;
    cout << "\n" << "\n";
    cout << "Enter player 2 number" << endl;
    cin >> p2->playerNumber2;
    cout << "Enter player 2 top speed in miles per h (only input miles)" << endl;
    cin >> p2->topSpeed2;
    cout << "Enter player 2 position type with first letter of position example: striker = s" << endl;
    cin >> player2;

    cout << "player1:" << player1 << " player2:" << player2 <<  endl;

    return 0;
}