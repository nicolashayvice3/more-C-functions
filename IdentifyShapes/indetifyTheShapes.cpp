#include <iostream>

using namespace std;

void displaySquare(){
    cout<<" ■ \n";
}

void displayTriangle(){
    cout<<" ▲ \n";
}

void displayCircle(){
    cout<<" o \n";
}

void displayRectangle(int width, int height){

    int rectangleDiameter = width*height;
    cout<<" this shape has diameter of " << rectangleDiameter << "mm units, with width=2 & height=4 this info might help you \n";
    cout<<" ▬ \n";
}
 
int game() {
    bool gameOn = true;
    string choice;
    int score = 0;

    // gameOn = false; to be used to get out of the loop

    while (gameOn != false){
    srand((unsigned) time(0));
    int result = 1 + (rand() % 4);
    
        switch (result) {
        case 1:
            cout << "\n what is this this shape?\n";
            displayRectangle(2, 4);
            cout << "answer: ";
            cin >> choice;
            cout << endl;
            if (choice == "rectangle"){
            cout << "Congratulations 10+ points\n\n";
            cout << "\n\n *******************************\n";
            ++score;
            } else if (choice != "rectangle"){
            cout << "Sorry, the correct answer is rectangle\n\n";
            cout << "\n\n *******************************\n";
            } 
            break;
        case 2:
            cout << "\n what is this this shape?\n";
            displaySquare();
            cout << "answer: ";
            cin >> choice;
            cout << endl;
            if (choice == "square"){
            cout << "Congratulations 10+ points\n\n";
            cout << "\n\n *******************************\n";
            ++score;
            } else if (choice != "square"){
            cout << "Sorry, the correct answer is square\n\n";
            cout << "\n\n *******************************\n";
            } 
            break;
        case 3:
            cout << "\n what is this this shape?\n";
            displayTriangle();
            cout << "answer: ";
            cin >> choice;
            cout << endl;
            if (choice == "triangle"){
            cout << "Congratulations 10+ points\n\n";
            cout << "\n\n *******************************\n";
            ++score;
            } else if (choice != "triangle"){
            cout << "Sorry, the correct answer is triangle\n\n";
            cout << "\n\n *******************************\n";
            } 
            break;
        case 4:
            cout << "\n what is this this shape?\n";
            displayCircle();
            cout << "answer: ";
            cin >> choice;
            cout << endl;
            if (choice == "circle"){
            cout << "Congratulations 10+ points\n\n";
            cout << "\n\n *******************************\n";
            ++score;
            } else if (choice != "circle"){
            cout << "Sorry, the correct answer is circle\n\n";
            cout << "\n\n *******************************\n";
            } 
            break;
        default:
            cout<<"error game logic not working, game resetting \n";
            cout<< score << " - points as highScore" << endl;
            break;
        }
    }
    return 0;
}

int main(){
    int choice;
    int width = 2;
    int height = 6;
    bool gameOn = true;
    int highScore = 0;
    while (gameOn != false){
        cout << "\n\n *******************************\n";
        cout << " 1 - Play the game.\n";
        cout << " 2 - Final Score.\n";
        cout << " 3 - Exit.\n";
        cout << " Enter your choice and press return: ";

        cin >> choice;

        switch (choice){
            case 1:
            cout << "\n game start! \n";
            game();
            break;
            case 2:
            cout << "\n Your final Score: " << highScore << endl;
            break;
            case 3:
            cout << " \n End of Program. \n";
            gameOn = false;
            break;
            default:
            cout << "Not a Valid Choice. \n";
            cout << "Choose again.\n";
            cout << " Enter your choice and press return: ";
            cin >> choice;
            break;
    }

    }

return 0;
}