#include <iostream>

using namespace std;

int main(){
    int choice;
    bool gameOn = true;
    while (gameOn != false){
        cout << "\n\n *******************************\n";
        cout << " 1 - Display expenses\n";
        cout << " 2 - Add expenses\n";
        cout << " 3 - Exit.\n";
        cout << " Enter your choice and press return: ";

        cin >> choice;

        switch (choice){
            case 1:
                cout << "\n View Daily & weekly expenses Expenses \n";
            break;
            case 2:
                cout << "\n Add daily expenses \n";
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