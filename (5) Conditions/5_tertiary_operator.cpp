#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter a number: "<<endl;
    cin>>i;
    (i%2==0)?cout<<i<<" is a even number"<<endl:cout<<i<<" is a odd number"<<endl;
    return 0;
}

/*
Learnings:
Tertiary operator(? :) is a way of writing if-else statements in a different way.
The syntax for tertiary operator is:

(condition) ? (block of code to exucute if condition is true) : 
              (block of code to execute if the condition is false)

int i;
cin>>i;
if(i>=0){
    cout<<"positive"<<endl;
}
else{
    cout<<"negative"<<endl;
}

The above code cna be written using tertiary opeerator in following manner:

int i;
cin>>i;
i>=0 ? cout<<"positive" : cout<<"negative";

*/