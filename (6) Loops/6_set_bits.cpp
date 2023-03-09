/*
Problem statement: Write a program to find the number of times set bit('1') occurs in the binary
representation of the given number,
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n"<<endl;
    cin>>n;
    int count = 0;
    while(n){
        count+=(n&1);
        n>>=1;
    }
    cout<<"The number of set-bits are "<<count<<endl;
    return 0;
}