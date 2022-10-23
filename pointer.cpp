#include <iostream>
#include <vector>

using namespace std;

int main () {

    int numberOfInputs = 0;

    cout << "how many inputs do you want? " << endl;
    cin >> numberOfInputs;

    // contains all the inputs from user, positive and negative
    vector<int> vectorOfInputs(numberOfInputs);

    // stores all  positive inputs from user
    int sum = 0;
    int countPositive = 0;

    // populates the container with user inputs
     for(int i = 0; i < numberOfInputs; ++i)
    {
        cout<<"input#"<<i+1<<":";
        cin >> vectorOfInputs.at(i);
        //if the number is positive increase sum
        if(vectorOfInputs.at(i) >0)
        {
            sum += vectorOfInputs.at(i);
            ++countPositive;
        }
        
    }

    //print all the positive numbers
    for(int elem: vectorOfInputs)
    {
        if(elem>0)
        {
            cout<<elem<<endl;
        }
    }

    //print the sum of all positive inputs 
    cout<<"the sum of all the above positive numbers is: "<<sum<<endl;

    return 0;
}

