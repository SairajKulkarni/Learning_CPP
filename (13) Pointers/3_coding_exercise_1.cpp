/*
Question:
Pythagoras Triplet
Given a non negative integer A, print all the pairs of integers(a,b) such that

a and b are positive integers

a<=b and

a^2 + b^2 = A

0 <= A



Sample Input

1
9
25
Sample Output



(0,1)
 
(0,3)
 
(0,5) (3,4)
*/

#include<iostream>
#include<cmath>
using namespace std;

void print(int n){
    int squareRoot = sqrt(n);
    for(int i=0;i<=squareRoot/1.414;i++){
        for(int j=0;j<=squareRoot;j++){
            if(sqrt(pow(i,2)+pow(j,2))==squareRoot){
                cout<<"("<<i<<","<<j<<") ";
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    print(n);
    return 0;
}