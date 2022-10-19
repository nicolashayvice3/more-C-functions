#include <iostream>

using namespace std;

int main () {

    struct soccer {
    int playerNumber; 
    float topSpeed;
    } player1;

    struct soccer2 {
    int playerNumber2;
    float topSpeed2;
    } player2;

    enum playerPosition1 { goalkeeper, midfielder, striker, winger, defender };
    char position1, position2;

    cout << "Enter player 1 number" << endl;
    cin >> player1.playerNumber;
    cout << "Enter player 1 top speed in miles per h (only input miles)" << endl;
    cin >> player1.topSpeed;
    cout << "Enter player 1 position type with first letter of position example: winger = w" << endl;
    cin >> position1;
    cout << "\n" << "\n";
    cout << "Enter player 2 number" << endl;
    cin >> player2.playerNumber2;
    cout << "Enter player 2 top speed in miles per h (only input miles)" << endl;
    cin >> player2.topSpeed2;
    cout << "Enter player 2 position type with first letter of position example: striker = s" << endl;
    cin >> position2;

    cout << "player1 number:" << player1.playerNumber << "  |  player1 top speed:" << player1.topSpeed;
    
    switch(position1) {
        case 'd':
            cout << "  |  player1 position:" << " defender" <<  endl;
            break;
        case 's':
            cout << "  |  player1 position:" << " striker" <<  endl;
            break;
        case 'm':
            cout << "  |  player1 position:" << " midfielder" <<  endl;
            break;
        case 'w':
            cout << "  |  player1 position:" << " winger" <<  endl;
            break;
        default:
            cout << "  |  player1 position:" << " goalkeeper" <<  endl;
    }

    cout << "player2 number:" << player2.playerNumber2 << "  |  player2 top speed:" << player2.topSpeed2;

    switch(position2) {
        case 'd':
            cout << "  |  player2 position:" << " defender" <<  endl;
            break;
        case 's':
            cout << "  |  player2 position:" << " striker" <<  endl;
            break;
        case 'm':
            cout << "  |  player2 position:" << " midfielder" <<  endl;
            break;
        case 'w':
            cout << "  |  player2 position:" << " winger" <<  endl;
            break;
        default:
            cout << "  |  player2 position:" << " goalkeeper" <<  endl;
    }

    return 0;
}