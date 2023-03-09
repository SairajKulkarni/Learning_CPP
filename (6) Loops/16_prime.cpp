/*
Problem statement: Check if a given number is prime or not.
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
        cout<<"Not prime"<<endl;
        break;
        }
        i++;
    }
    if(i==n){
        cout<<"Prime"<<endl;
    }
    
    return 0;
}