//question 6 - Nicolas hayvice-Caballe

#include <iostream>

using namespace std;

// data structure to store the information of the daily expenses
struct Expenses1{
    double housing;
    double utilities;
    double transportation;
    double food;
} expenses1;

struct Expenses2{
    double housing;
    double utilities;
    double transportation;
    double food;
} expenses2;

struct Expenses3{
    double housing;
    double utilities;
    double transportation;
    double food;
} expenses3;

// display the input for the daily expenses
void setDailyExpenses(){

    cout<<"Enter in Housing expenses: ";
    cin>>expenses1.housing;
    cout<<"Enter in Utilities expenses: ";
    cin>>expenses1.utilities;
    cout<<"Enter in transportation expenses: ";
    cin>>expenses1.transportation;
    cout<<"Enter in Food expenses: ";
    cin>>expenses1.food;
}

void setDailyExpenses2(){

    cout<<"Enter in Housing expenses: ";
    cin>>expenses2.housing;
    cout<<"Enter in Utilities expenses: ";
    cin>>expenses2.utilities;
    cout<<"Enter in transportation expenses: ";
    cin>>expenses2.transportation;
    cout<<"Enter in Food expenses: ";
    cin>>expenses2.food;
}

void setDailyExpenses3(){

    cout<<"Enter in Housing expenses: ";
    cin>>expenses3.housing;
    cout<<"Enter in Utilities expenses: ";
    cin>>expenses3.utilities;
    cout<<"Enter in transportation expenses: ";
    cin>>expenses3.transportation;
    cout<<"Enter in Food expenses: ";
    cin>>expenses3.food;
}

// adds the total of the expenses
double addDailyExpenses(){
    double total = expenses1.housing + expenses1.utilities + expenses1.transportation + expenses1.food;
    cout<<"total is: " << total << endl;
    return total;
}

double addDailyExpenses2(){
    double total = expenses2.housing + expenses2.utilities + expenses2.transportation + expenses2.food;
    cout<<"total is: " << total << endl;
    return total;
}

double addDailyExpenses3(){
    double total = expenses3.housing + expenses3.utilities + expenses3.transportation + expenses3.food;
    cout<<"total is: " << total << endl;
    return total;
}

// add all expenses to the total weekly expense report 
double addAllExpenses(){
    double total = expenses1.housing + expenses1.utilities + expenses1.transportation + expenses1.food;
    double total2 = expenses2.housing + expenses2.utilities + expenses2.transportation + expenses2.food;
    double total3 = expenses3.housing + expenses3.utilities + expenses3.transportation + expenses3.food;
    cout<<"total for the week is: " << total + total2 + total3 << endl;
    return total;
}


int main(){
    int choice;
    int choice2;
    bool gameOn = true;
    while (gameOn != false){
        cout << "\n\n *******************************\n";
        cout << " 1 - Display daily expenses\n";
        cout << " 2 - Display weekly expenses\n";
        cout << " 3 - add expenses\n";
        cout << " 4 - Exit.\n";
        cout << " Enter your choice and press return: ";

        cin >> choice;

        switch (choice){
            case 1:
                cout << "\n View the different total Daily expenses: \n";
                cout << " 1 - Day 1\n";
                cout << " 2 - Day 2\n";
                cout << " 3 - Day 3\n";
                cout << " Enter your choice: ";
                cin >> choice2;
                if (choice2 == 1) {
                addDailyExpenses();
                } else if (choice2 == 2) {
                addDailyExpenses2();
                } else if (choice2 == 3) {
                addDailyExpenses3();
                }
            break;
            case 2:
                addAllExpenses();
            break;
            case 3:
                cout << "\n Add daily expenses in  for day 1 in $nzd \n";
                setDailyExpenses();
                cout << "\n Add daily expenses in  for day 2 in $nzd \n";
                setDailyExpenses2();
                cout << "\n Add daily expenses in  for day 3 in $nzd \n";
                setDailyExpenses3();
            break;
            case 4:
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