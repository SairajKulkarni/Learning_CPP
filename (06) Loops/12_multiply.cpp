/*
Multiply two numbers without multiplying them.
2*5 = 2 + 2 + 2 + 2 + 2 (5 times).
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int product = 0;
    for(int i=1;i<=b;i++){
        product+=a;
    }
    cout<<product;
    return 0;
}