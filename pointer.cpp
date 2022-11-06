//question 2 - Nicolas hayvice-Caballe

#include <iostream>
#include <vector>

using namespace std;

// passing array to function using a pointer

void func( vector <int> duplicate) {  // the original vector is copied into the vector duplicate
     int l = duplicate.size(); // storing the size of vector duplicate in l
     int sum = 0;

    for(int i = 0; i < l; i++){
        if(duplicate[i] > 0)
        sum += duplicate[i];
    }

     // printing all the elements in the array
     cout<<"all values in the vector(array)-->"<<endl;
    for (int i = 0; i < l; i++)
    cout<<duplicate[i]<<" ";
    cout<<endl;
    cout<<"the sum of all the above positive numbers is: "<< sum <<endl;
} 

int main () {

    int numberOfInputs = 0;
    cout<<"How many inputs?"<<endl;
    cin>>numberOfInputs;
    
    //populates the array with all the choosen inputs
    vector<int> vectorOfInputs(numberOfInputs);
    
    // use for loop or any other loop populate the vector by user input
    for(int i = 0; i < numberOfInputs; ++i)
    {
        cout<<"input#"<<i+1<<": ";
        cin >> vectorOfInputs.at(i);
    }

    // passing the dynamic array as a pointer 
    func(vectorOfInputs);

    return 0;
}

