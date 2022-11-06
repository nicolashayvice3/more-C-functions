//question 3 - Nicolas hayvice-Caballe

#include <iostream>

using namespace std;

int main () {

    // arrays a, b and c
    int first [3][3];
    int second [3][3];
    int sum [3][3];

    // user input for first array
    cout << endl << "|Input Matrix a|" << "\n\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter the value for a" << i + 1 << j + 1 << ": ";
            cin >> first[i][j];
        }
    }

    // user input for second array
    cout << endl << "|Input Matrix b|" << "\n\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter the value for a" << i + 1 << j + 1 << ": ";
            cin >> second[i][j];
        }
    }

    //displaying matrix input for first and second
    cout << endl << "|Entered Matrix a and b|" << "\n\n";
    for (int i = 0; i < 3; ++i) {
        cout << "\t";
        for (int j = 0; j < 3; ++j) {
            cout << first[i][j] << " ";
        }
        cout << "\t";
        for (int j = 0; j < 3; ++j) {
            cout << second[i][j] << " ";
        }
        cout << endl;
    }

    // adding the two arrays together
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    // displaying the sum of the two arrays in sum(C)
    cout << endl << "|Sum of A and B in to C|" << "\n\n";
    for (int i = 0; i < 3; ++i) {
        cout << "\t";
        for (int j = 0; j < 3; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    //multiply sum(C) by 3
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = sum[i][j] * 3;
        }
    }

    cout << endl << "|C multiplied by 3|" << "\n\n";
    for (int i = 0; i < 3; ++i) {
        cout << "\t";
        for (int j = 0; j < 3; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}