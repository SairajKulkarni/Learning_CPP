#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    cout << "Value of variable i is " << i << endl;
    cout << "Size of data-type int is " << sizeof(i) << endl;
    cout << sizeof(int) << endl;

    cout << "*******************************************" << endl;
    short int s = 25;
    cout << "Value of variable s is " << s << endl;
    cout << "Size of data-type short int is " << sizeof(s) << endl;
    cout << sizeof(short int) << endl;

    cout << "*******************************************" << endl;
    long long int l = 30;
    cout << "Value of variable s is " << l << endl;
    cout << "Size of data-type long long int is " << sizeof(l) << endl;
    cout << sizeof(long long int) << endl;

    cout << "**********************************************" << endl;
    float f = 1.23;
    cout << "The value of variable f is " << f << endl;
    cout << "The size of float data-type is " << sizeof(float) << endl;
    cout << sizeof(float) << endl;

    cout << "***********************************************" << endl;
    double d = 3.275;
    cout << "The value of variable d is " << d << endl;
    cout << "The size of double data-type is " << sizeof(d) << endl;
    cout << sizeof(double);

    cout << "***********************************************" << endl;
    char c = 'a';
    cout << "The value of variable c is " << c << endl;
    cout << "The size of char data-type is " << sizeof(c) << endl;
    cout << sizeof(char);

    cout << "************************************************" << endl;
    bool b = false;
    cout << "The value of variable b is " << b << endl;
    cout << "The size of bool data-type is " << sizeof(b) << endl;
    cout << sizeof(bool);

    int j;
    cout << j << endl;

    float g;
    cout << g << endl;

    bool b2;
    cout << b2 << endl;

    char c2;
    cout << c2 << endl;
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

(4) int can store only integers, for storing decimal(foating values) we have "float" data-type and
    "double". Difference is that float requires 4 bytes of space and double requires 8 bytes of
    space. float can store small floating values, double cna store large floating values.

(5) To store character data-type we have a dta-type called "char", its size is 1 byte.

(6) Sometimes we want to store value which is either true or false. For this we have boolean,
    the data-type is called "bool" it can store only two values either true or false. True means 1,
    and flase means 0. Size is 1 byte.

(7) If you don tassign any value to variable of any data type then garbage value is assgined to
    it and, that garbage value gets printed.

(8) Naming of variable: you can use small letters, capital letters.
    name of a variable cant start with a number and the name of variable should not contain space
    in naming them instead you can use underscore(_).
 */