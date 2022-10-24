#include <iostream>

using namespace std;

int main () {

    int first [3][3];
    int second [3][3];
    int sum [3][3];

    cout << endl << "|Input Matrix a|" << "\n\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter the value for a" << i + 1 << j + 1 << ": ";
            cin >> first[i][j];
        }
    }

    cout << endl << "|Input Matrix a|" << "\n\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter the value for a" << i + 1 << j + 1 << ": ";
            cin >> first[i][j];
        }
    }

    return 0;
}