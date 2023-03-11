/*
Problem statement: Write a function to check if a number is prime or not.
*/
#include<iostream>
using namespace std;
void isPrime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            cout<<i<<endl;
            break;
        }
        i++;
    }
    if(i==n){
        cout<<"Prime"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    isPrime(n);
}