#include <iostream>
using namespace std;
void mySwap(int &x, int &y)
{
    cout << "In function before swapping: " << endl;
    cout << x << " " << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "In function after swapping: " << endl;
    cout << x << " " << y << endl;
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

In this code, we have made a small change to the function signature of mySwap. Specifically, we 
have changed the function parameters from int a and int b to int &x and int &y. This change makes 
the function arguments pass by reference instead of pass by value.

With this change, the mySwap function can now directly modify the original values of a and b in 
the main function. This is because a and b are now passed as references to integers, rather than 
as copies of integers.

In the main function, we call mySwap with a and b as its arguments. Since a and b are now passed 
by reference, the mySwap function can modify their values directly, without creating copies. After 
the function call, the values of a and b in the main function are swapped.

To summarize, the change we made to the function signature of mySwap allowed us to use call by 
reference instead of call by value. This in turn allowed us to modify the original values of a and 
b in the main function directly from within the mySwap function, resulting in the correct swapping 
of their values.
*/