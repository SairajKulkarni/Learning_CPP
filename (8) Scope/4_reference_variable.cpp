#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int y = a; // value of a is copied into y and y is a different variable.

    int &x = a;
    int &z = a;
    // A block with 10 inside it has 3 names a,x,z
    a++; // 11
    x++; // 12
    y++; // 11
    z++; // 13

    cout << a << " " << x << " " << y << " " << z << endl;
    // Output: 13 13 11 13
    return 0;
}

/*
Learnings:
----------

int a = 10;
int x = a; // value of a is copied into x.

********
*  10  *
********
    a

********
*  10  *
********
    x

int  a = 10;
int &x =  a;

********
*  10  *
********
   a,x

So name of this block is x also. "&x" is called as reference variable.
Reference variable is a like a nickname. It will not be alloted some different block of memory but
it will point ot the same memory location as 'a'.

x++;
cout<<a;
Ouput will be 11 as x is point ing towards the same memory location.

Now if we write int &y = a;
now the box contaning the value has 3 names -> a,x,y.

y++;
cout<<a; //12
*/