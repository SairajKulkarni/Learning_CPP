/*
Problem statement: Given two numbers swap them.
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second umber: "<<endl;
    cin>>b;
    // Using a temporary variable(temp)
    // int temp;
    // temp=a;
    // a=b;
    // b=temp;
    // Using bitwise operator XOR(^)
    a=a^b;
    b=a^b; // b=a^b^b -> b=a
    a=a^b; // a=a^b^a -> a=b 
    cout<<"First number is "<<a<<endl;
    cout<<"Second number is "<<b<<endl;
    return 0;
}


/*
Learnings:
We know that XOR give 0 when both the bits are zero, we can use this knowledge to swap two
numbers without using a temporary variable.

We also have an inbuilt function to swap two numbers "swap(a,b)".

So it is preferable to use inbuilt swap funciton.
*/