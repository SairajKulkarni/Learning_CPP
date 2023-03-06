#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    cout << "Value of variable i is " << i << endl;
    cout << "Size of variable i is " << sizeof(short int) << endl;
    return 0;
}

/*
************
Learnings: *
************
(1) int i=10;
    a] i is a variable and int is a data-type.
    b] data-type tells us to things = which data you are storing and how much space you require
       to store that data.
    c] int we store integers and int requires 4 bytes of space.

(2) sizeof()  this function tells us the size of tha paticualr datatype or if we giv einput in
    this function a variable then it reurns its szie to us also we can give it input as - "int",
    "char" , means data-type can also be given as input to this function.(We get size in form 
    terms of bytes).

(3) To store smallsized integers we can use the data-type "short int", it takes 2 bytes of space,
    to store large sized integers we can use "long long int" data-type it will take 8 bytes of 
    space.
*/