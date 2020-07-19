//
//  main.cpp
//  total
//
//  Created by Bo Ying Liu on 11/24/19.
//  Copyright © 2019 Bo Ying Liu. All rights reserved.
//
#include <iostream>

using namespace std;

//Template function that returns total of all values entered by user
template <class T>
T total (int n)
{
    int i;
    //Initializing variables
    T sum = 0, value;
    
    //Prompting user
    
    
    //Iterate till user enters n values
    for(i=1; i<=n; i++)
    {
        //Reading a value
        cout << "\n Enter a values: \t ";
        cin >> value;
        
        //Accumulating sum
        sum = sum + value;
    }
    
    //Return sum
    cout<<" "<<endl;
    return sum;
    
}

//Main function
int main()
{
    int n;
    
    //Reading n value
    cout << "How many integer values do you wish to total? ";
    cin >> n;
    
    //Calling function for integers and printing result
    cout << total<int>(n)<<endl;
    
    cout<<" "<<endl;
    cout << "How many double values do you wish to total?  ";
    cin >> n;
    
    //Calling function for doubles and printing result
    cout <<total<double>(n);
    
    cout << " ";
    
    return 0;
}
