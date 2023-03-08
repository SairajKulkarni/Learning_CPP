#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the numebr a: "<<endl;
    cin>>a;
    cout<<"Enter the number b: "<<endl;
    cin>>b;
    cout<<"Enter the number c: "<<endl;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the largest number"<<endl;
        }
        else{
            cout<<c<<" is the largest number"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<" is the largest number"<<endl;
        }
        else{
            cout<<c<<" is the largest number"<<endl;
        }
    }
}