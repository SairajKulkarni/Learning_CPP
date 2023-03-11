/*
Problem statement: Write a program to calculate factorial of a number.
*/
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i = n; i>=2;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a number n: "<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}

/*
Learnings:
Although the varaibels in main and the actual factorail function have same names, they are totally
different, because their scope is different they both are local variables having different scopes.
*/