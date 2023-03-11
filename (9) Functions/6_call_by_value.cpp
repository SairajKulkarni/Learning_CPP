#include <iostream>
using namespace std;
void mySwap(int a, int b)
{
    cout << "In function before swapping: " << endl;
    cout << a << " " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "In function after swapping: " << endl;
    cout << a << " " << b << endl;
}
int main()
{
    int a = 2;
    int b = 3;
    cout << "Before swapping in main" << endl;
    cout << a << " " << b << endl;
    mySwap(a, b);
    cout << "After swapping in main" << endl;
    cout << a << " " << b << endl;
    return 0;
}

/*
Learnings:
void mySwap(int a,int b){
    cout<<"In function before swapping: "<<endl;
    cout<<a<<" "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"In function after swapping: "<<endl;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int a=2;
    int b=3;
    cout<<"Before swapping in main"<<endl;
    cout<<a<<" "<<b<<endl;
    mySwap(a,b);
    cout<<"After swapping in main"<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}

This program defines a function called mySwap that takes two integer arguments a and b. The
function swaps the values of a and b using a temporary variable temp. It then prints out the
values of a and b before and after the swapping process.

In the main function, two integer variables a and b are defined with the values of 2 and 3
respectively. The values of a and b are printed out before calling the mySwap function. The mySwap
function is then called with a and b as its arguments. Finally, the values of a and b are printed
out again after the mySwap function call.

One thing to note is that the swapping done in the mySwap function does not affect the values of
a and b in the main function because they are passed by value. This is known as 'call by value'.
*/