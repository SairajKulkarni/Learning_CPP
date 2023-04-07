#include<iostream>
using namespace std;
int main(){
    // int i = 10;
    // int *p = &i;
    // cout<<&p<<endl;;
    // cout<<p<<endl;;
    // cout<<*p<<endl;
    // cout<<i<<endl;
    // cout<<&i<<endl;
    // i = 23;
    // cout<<i<<endl;
    // *p = 32;
    // cout<<i<<endl;

    // int a=50;
    // int *ptr = &a;
    // int *q = ptr;
    // (*q)++;
    // cout<<a<<endl;
    // cout<<&ptr<<endl;
    // cout<<&q<<endl;

    // cout<<"****************************"<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<q<<endl;
    
    int j;
    cout<<j<<endl;

    // int *p;
    // cout<<p<<endl;

    int *p = NULL;
    cout<<p;
    *p = 50;

    return 0;
}

/*
Learnings:
(1) '*' -> This is called as dereference operator.

(2) int i = 10;
    int *p = &i;

    &i and p both have the same value (i.e address).
    i  and *p both have same value (actual value stored).

(3) There are 2 ways to access same memory.
    int i = 10;
    int *p = &i;
    i = 23;
    cout<<i<<endl;

    (a) directly be accessing the varible
    i = 23;
    cout<<i<<endl;

    (b) using pointer dereference variable
    *p = 32;
    cout<<i<<endl;

(4) int a=50;
    int *ptr = &a;
    int *q = ptr;

    q and ptr are the same thing because we have copied the content ptr into q, as both of them 
    are pointers.

(5) NEVER derefernce any garbage address, so ALWAYS initialise your pointer to NULL.

    int j;
    cout<<j; // some garbage integer.

    int *p;
    cout<<p; // some garbage address will be printed

    *p = 50; // we are going at that random garbage address and replacing it's content by '50'.
    cout<<*p<<endl;

    It can be some important address and we are replacing it's content this is very dengerous.
    It's RISKY.

    So, there are 2 ways:
    either assign some proper value to the pointer:
    int i = 10;
    int *p = &i;

    OR

    Initialise the pointer to 'NULL'
    int *p = NULL;
    *p = 50;
    Here, wee are replacing NULL so our system will crash, and we want our system to crash, rather
    than changing the content of some random address.
*/