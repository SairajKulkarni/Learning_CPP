#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    cout << "Value of variable i is " << i << endl;
    cout << "Size of variable i is " << sizeof(i) << endl;
    return 0;
}

/*
Learnings:
(1) int i=10;
    a] i is a variable and int is a data-type.
    b] data-type tells us to things = which data you are storing and how much space you require
       to store that data.
    c] int we store integers and int requires 4 bytes of space.
(2) sizeof()  this function tells us the size of tha paticualr datatype or if we giv einput in
    this function a variable then it reurns its szie to us also we can give it input as - "int",
    "char" , means data-type can also be given as input to thsi function.
*/