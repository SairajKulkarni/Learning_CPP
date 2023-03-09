/*
Problem statement: Given n, find the sum of it's digits.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n: "<<endl;
    cin>>n;
    int sum = 0;
    int i = n % 10;
    while(n){
        sum+=i;
        n/=10;
        i=n%10;
    }
    cout<<"Sum of the digits of number is "<<sum<<endl;
    return 0;
}