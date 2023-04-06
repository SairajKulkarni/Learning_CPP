#include<iostream>
using namespace std;
int main(){

    // Same results
    int a = 1;
    a++;
    cout<<a<<endl;

    int b = 1;
    ++b;
    cout<<b<<endl;

    int a1 = 1;
    a1--;
    cout<<a1<<endl;

    int b1 = 1;
    --b1;
    cout<<b1<<endl;

    // Difference
    int c, x;
    c = 1;
    x = c++;
    cout<<x<<endl;
    cout<<c<<endl;

    int d, z;
    d = 1;
    z = ++d;
    cout<<z<<endl;
    cout<<d<<endl;

    int c1, x1;
    c1 = 1;
    x1 = c1--;
    cout<<x1<<endl;
    cout<<c1<<endl;

    int d1, z1;
    d1 = 1;
    z1 = ++d;
    cout<<z1<<endl;
    cout<<d1<<endl;

    return 0;
}


/*
Learnings:

Post: First assign then increment/decrement.
Pre:  First increment/decrement then assign.

(1) Post-increment:
    First assgin then increment.
    int c, x;
    c = 1;
    x = c++;
    cout<<x<<endl; O/P =  1
    cout<<c<<endl; O/P =  2

(2) Pre-increment:
    First increment then assgin.
    int c, x;
    c = 1;
    x = ++c;
    cout<<x<<endl; O/P =  2
    cout<<c<<endl; O/P =  2

(3) Post-deccrement:
    First assgin then decrement.
    int c, x;
    c = 1;
    x = c--;
    cout<<x<<endl; O/P =  1
    cout<<c<<endl; O/P =  0

(4) Pre-deccrement:
    First decrement then assgin.
    int c, x;
    c = 1;
    x = --c;
    cout<<x<<endl; O/P =  0
    cout<<c<<endl; O/P =  0
*/