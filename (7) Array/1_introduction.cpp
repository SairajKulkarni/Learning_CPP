#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int b[10] = {1, 2, 3, 4};
    a[0] = 2;
    a[4] = 5;
    cout << a[0] << " " << a[4] << endl;
    cout << b[0] << " " << b[1] << " " << b[2] << " " << b[3] << endl; // inefficient way of printing array.
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    cout<<endl;
    cout<<sizeof(b)<<endl;
    return 0;
}

/*
Learnings:
int a[10];
We will get 10 boxes each of size 4 bytes to total array is of size 40 bytes, these boxes will be
arraned in sequential order numbered from 0 till 9.
So, for int a[n], numbering of the boxes will be from 0 to n-1.

Initialization : int b[4]={1, 2, 3, 4};
Printing values: cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3];

When we initialize an array all the positions becomes '0', after thear we can assign them values.

And if we don't initialize the array then while printing the array we get garbage values as
output.

We can't define array without mentioning size int a[] -> this is wrong, you need to mention the 
size of array in the square brckets.

When we mention the size and define the array then that much szie gets allocated to the array.
*/