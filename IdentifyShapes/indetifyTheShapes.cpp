#include <iostream>

using namespace std;

// functions to display the different shapes
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

// runs the game and displays each shape through a switch statement. Each switch statement calls a function to display the shape
// and adds +10 points to the score if the user gets the shape correct or exits the game if the user gets the shape wrong taking them to the main menu
int game() {
    bool gameOn = true;
    string choice;
    int score = 0;
    bool start = true;
    while (gameOn != false){
    srand((unsigned) time(0));
    int result = 1 + (rand() % 4);

        if (start == true) {
            cout << "\n Try getting as many shapes as possible correct! GL! \n";
        }
    
        switch (result) {
        case 1:
            start = false;
            cout << "\n what is this this shape?\n";
            displayRectangle(2, 4);
            cout << "answer: ";
            cin >> choice;
            cout << endl;
            if (choice == "rectangle"){
            cout << "Congratulations 10+ points\n\n";
            cout << "\n\n *******************************\n";
            score = score + 10;
            } else if (choice != "rectangle"){
            cout << "Sorry please try again, the correct answer is rectangle\n\n";
            gameOn = false;
            } 
            break;
        case 2:
            start = false;
            cout << "\n what is this this shape?\n";
            displaySquare();
            cout << "answer: ";
            cin >> choice;
            cout << endl;
            if (choice == "square"){
            cout << "Congratulations 10+ points\n\n";
            cout << "\n\n *******************************\n";
            score = score + 10;
            } else if (choice != "square"){
            cout << "Sorry please try again, the correct answer is square\n\n";
            gameOn = false;
            } 
            break;
        case 3:
            start = false;
            cout << "\n what is this this shape?\n";
            displayTriangle();
            cout << "answer: ";
            cin >> choice;
            cout << endl;
            if (choice == "triangle"){
            cout << "Congratulations 10+ points\n\n";
            cout << "\n\n *******************************\n";
            score = score + 10;
            } else if (choice != "triangle"){
            cout << "Sorry please try again, the correct answer is triangle\n\n";
            gameOn = false;
            } 
            break;
        case 4:
            start = false;
            cout << "\n what is this this shape?\n";
            displayCircle();
            cout << "answer: ";
            cin >> choice;
            cout << endl;
            if (choice == "circle"){
            cout << "Congratulations 10+ points\n\n";
            cout << "\n\n *******************************\n";
            score = score + 10;
            } else if (choice != "circle"){
            cout << "Sorry please try again, the correct answer is circle\n\n";
            gameOn = false;
            } 
            break;
        default:
            start = false;
            cout<<"error game logic not working, game resetting \n";
            cout<< score << " - points as highScore before crash" << endl;
            break;
        }
    }
    // score returned to be displayed in the main menu - main() function
    return score;
}

// main menu function with switch statement for starting game, displaying highscore and exiting the game
int main(){
    int choice;
    int width = 2;
    int height = 6;
    int highScore = game();
    bool gameOn = true;
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