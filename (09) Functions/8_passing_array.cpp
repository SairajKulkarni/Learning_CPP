#include <iostream>
using namespace std;
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print(a, n);
    int arraySum = sum(a, n);
    cout << arraySum << endl;
    return 0;
}

/*
Learnings:
The given code takes an integer input n from the user, creates an integer array a of size n, takes
n integer inputs from the user and then calls the function print to print the array elements.

The print function takes an integer array a and an integer n as arguments, and uses a for loop to
iterate over the array elements and print them one by one.

From this code, we can derive the following learnings:

Arrays are used to store multiple values of the same data type in a contiguous block of memory.
(1) The size of an array needs to be known at compile time, but the C++ language allows the use of
variable-length arrays as a compiler extension.
(2) The for loop is a commonly used construct for iterating over arrays and other collections of data.
(3) Functions can take arrays as arguments, and the size of the array can be passed as a separate
argument.
(4) Functions can be used to encapsulate common functionality, making code more modular and easier to
maintain.
(5) Arrays are always passed by reference.
    if you change the value of any element of the array inside the function then it will actually get
    changed inside the main function.
*/