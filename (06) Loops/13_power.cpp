/*
Problem: find a^b without using power function.
a^b = a*a*a*a*a .............(b times)
*/
#include<iostream>
using namespace std;
int main(){
    int power = 1;
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    cout<<power<<endl;
    return 0;
}

/*
Learnings:
pow(a,b);   this is a^b .
sqrt(a); gives square root of a.

FOR USING these functions you need to include cmath
'#include<cmath>'
*/