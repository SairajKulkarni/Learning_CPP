#include<iostream>
using namespace std;
int main(){
    int i,j;
    cin>>i>>j;

    bool isEq = (i==j); //checks wether i is equal to j or not is eaul then 1 is stored if not 0.
    bool nEq = (i!=j); //checks wether i is equal to j or not is eaul then 1 is stored if not 0.
    bool isgr = (i>j); //checks wether i is equal to j or not is eaul then 1 is stored if not 0.
    bool isgrEq = (i>=j); //checks wether i is equal to j or not is eaul then 1 is stored if not 0.
    bool isless = (i<j); //checks wether i is equal to j or not is eaul then 1 is stored if not 0.
    bool islessEq = (i<=j); //checks wether i is equal to j or not is eaul then 1 is stored if not 0.

    cout<<"Is equal: "<<isEq<<endl;
    cout<<"Is not equal: "<<nEq<<endl;
    cout<<"Is greater: "<<isgr<<endl;
    cout<<"Is greater than or equal: "<<isgrEq<<endl;
    cout<<"Is lesser: "<<isless<<endl;
    cout<<"Is less than or equal: "<<islessEq<<endl;

    return 0;
}

/*
In total there a 6 relational operators.
>=, >, <=, <, ==, !=
These relational operators will return a boolean value.
*/