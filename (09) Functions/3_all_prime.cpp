/*
Problem statement: Write a function to generate all the prime nubers from 2 to N.
*/
#include<iostream>
using namespace std;
void allPrime(int n){
    for(int i=2;i<=n;i++){
        int j=2;
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    allPrime(n);
    return 0;
}