#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Budget  //declare a global type
{
    double housing;
    double utilities;
    double household_exp;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double misc;
};

Budget set_budget()
{
    Budget set = {500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.00,
        150.00, 75.00, 50.00};
    
    return(set);
}


Budget get_spent() //returns a budget spent structure
{
    Budget spent;
    
    cout<<"Enter in Housing Expense: ";
    cin>>spent.housing;
    cout<<"Enter in Utilities Expense: ";
    cin>>spent.utilities;
    cout<<"Enter in Household Expenses: ";
    cin>>spent.household_exp;
    cout<<"Enter in Transportation Expense: ";
    cin>>spent.transportation;
    cout<<"Enter in Food Expense: ";
    cin>>spent.food;
    cout<<"Enter in Medical Expense: ";
    cin>>spent.medical;
    cout<<"Enter in Insurance Expense: ";
    cin>>spent.insurance;
    cout<<"Enter in Entertainment Expense: ";
    cin>>spent.entertainment;
    cout<<"Enter in Clothing Expense: ";
    cin>>spent.clothing;
    cout<<"Enter in Miscellaneous Expenses: ";
    cin>>spent.misc;
    
    return spent;
}

Budget calculate_spent()
{
    Budget total;
    
    Budget spent;
    
    Budget fixed;
    
    
    fixed = set_budget();
    spent = get_spent();
    
    total.housing = (fixed.housing - spent.housing);
    total.utilities = (fixed.utilities - spent.utilities);
    total.household_exp = (fixed.household_exp - spent.household_exp);
    total.transportation = (fixed.transportation - spent.transportation);
    total.food = (fixed.food - spent.food);
    total.medical = (fixed.medical - spent.medical);
    total.insurance = (fixed.insurance - spent.insurance);
    total.entertainment = (fixed.entertainment - spent.entertainment);
    total.clothing = (fixed.clothing - spent.clothing);
    total.misc = (fixed.misc - spent.misc);
    
    return(total);
}

void output()
{
    Budget fixed;
    Budget set_budget;
    fixed = set_budget;
    
    
    Budget spent;
    Budget get_spent;
    spent = get_spent;
    
    Budget total;
    Budget calculate_spent;
    total = calculate_spent;
    
    Budget difference = (set_budget, get_spent);
    
    cout<<"Category\t\t"<<"Budgeted\t"<<"Spent\t"<<"Over(-)/Under\n"
    "------------------------------------------------------------\n"
    "Housing\t\t"<<fixed.housing<<"\t"<<spent.housing<<"\t\t\n"
    "Utilities\t\t"<<fixed.utilities<<"\t"<<spent.utilities<<"\t\t\n"
    "Household_Exp\t\t"<<fixed.household_exp<<"\t"<<spent.household_exp<<"\t\t\n"
    "Transportation\t\t"<<fixed.transportation<<"\t"<<spent.transportation<<"\t\t\n"
    "Food\t\t"<<fixed.food<<"\t"<<spent.food<<"\t\t\n"
    "Medical\t\t"<<fixed.medical<<"\t"<<spent.medical<<"\t\t\n"
    "Insurance\t\t"<<fixed.insurance<<"\t"<<spent.insurance<<"\t\t\n"
    "Entertainment\t\t"<<fixed.entertainment<<"\t"<<spent.entertainment<<"\t\t\n"
    "Clothing\t\t"<<fixed.clothing<<"\t"<<spent.clothing<<"\t\t\n"
    "Miscellaneous\t\t"<<fixed.misc<<"\t"<<spent.misc<<"\t\t"<<endl;
    
    
    
    
    
}


int main()
{
    
    
    set_budget();
    calculate_spent();
    output();
    return 0;
}