/*
Problem statement:
Given a number 'n' find sum of all even numbers from 1 to 'n'.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        sum+=i;
        i+=2;
    }
    cout<<sum<<endl;
    return 0;
}
/*
Learnings:
If we dont initialize the varable sum then it will be asiigned a grabage value and our end result
won't be as desired.
*/