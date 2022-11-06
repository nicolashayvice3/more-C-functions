#include <iostream>

using namespace std;

struct Expenses{
    double housing;
    double utilities;
    double transportation;
    double food;
    double entertainment;
};

Expenses setDailyExpenses(){

    Expenses set;

    cout<<"Enter in Housing expenses: ";
    cin>> set.housing;
    cout<<"Enter in Utilities expenses: ";
    cin>>set.utilities;
    cout<<"Enter in transportation expenses: ";
    cin>>set.transportation;
    cout<<"Enter in Food expenses: ";
    cin>>set.food;

    return set;
}

Expenses setDailyExpenses2(){

    Expenses set;

    cout<<"Enter in Housing expenses: ";
    cin>> set.housing;
    cout<<"Enter in Utilities expenses: ";
    cin>>set.utilities;
    cout<<"Enter in transportation expenses: ";
    cin>>set.transportation;
    cout<<"Enter in Food expenses: ";
    cin>>set.food;

    return set;
}

Expenses setDailyExpenses3(){

    Expenses set;

    cout<<"Enter in Housing expenses: ";
    cin>> set.housing;
    cout<<"Enter in Utilities expenses: ";
    cin>>set.utilities;
    cout<<"Enter in transportation expenses: ";
    cin>>set.transportation;
    cout<<"Enter in Food expenses: ";
    cin>>set.food;

    return set;
}

// Budget calculate_spent()
// {
//     Budget total;
    
//     Budget spent;
    
//     Budget fixed;
    
    
//     fixed = set_budget();
//     spent = get_spent();
    
//     total.housing = (fixed.housing - spent.housing);
//     total.utilities = (fixed.utilities - spent.utilities);
//     total.household_exp = (fixed.household_exp - spent.household_exp);
//     total.transportation = (fixed.transportation - spent.transportation);
//     total.food = (fixed.food - spent.food);
//     total.medical = (fixed.medical - spent.medical);
//     total.insurance = (fixed.insurance - spent.insurance);
//     total.entertainment = (fixed.entertainment - spent.entertainment);
//     total.clothing = (fixed.clothing - spent.clothing);
//     total.misc = (fixed.misc - spent.misc);
    
//     return(total);
// }

int main(){
    int choice;
    bool gameOn = true;
    while (gameOn != false){
        cout << "\n\n *******************************\n";
        cout << " 1 - Display expenses\n";
        cout << " 2 - add expenses\n";
        cout << " 3 - Exit.\n";
        cout << " Enter your choice and press return: ";

        cin >> choice;

        switch (choice){
            case 1:
                cout << "\n View Daily & weekly expenses Expenses \n";
                cout << "\n daily expenses are: "; 
                // calculateExpenses();
            break;
            case 2:
                cout << "\n Add daily expenses in  for day 1 in $nzd \n";
                setDailyExpenses();
                cout << "\n Add daily expenses in  for day 2 in $nzd \n";
                setDailyExpenses();
                cout << "\n Add daily expenses in  for day 3 in $nzd \n";
                setDailyExpenses();
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