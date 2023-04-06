#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    bool isaLargest = (a>b) && (a>c);
    cout<<isaLargest<<endl;
    cout<<((a>b)||(a>c))<<endl;
    cout<<(!(a>=b))<<endl;
    return 0;
}

/* 
Learnings:
We will learn about AND(&&), OR(||) and NOT(!) operator.
*/