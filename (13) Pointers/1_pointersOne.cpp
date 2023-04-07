#include <iostream>
using namespace std;
int main()
{
    // int i = 10;
    // cout<<&i<<endl;
    // int *p = &i;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    int i;
    int *p1 = &i;

    char c;
    char *p2 = &c;

    cout << sizeof(i) << endl; // 4 as it is integer
    cout << sizeof(c) << endl; // 1 as it is character

    cout << sizeof(p1) << endl; // 4
    cout << sizeof(p2) << endl; // 4
    return 0;
}

/*
Learnings:
(1) int i = 10;
    a block of 4 bytes of memory is created.
    cout<<i; // output is 10.

    But how does the system knows where this 'i' is stored ?
    For this purpose we have somthing called as symbol table.
    It is generated by the compiler during compile time.

(2) Symbol table:
    i -> 700
    This 700 is the address.

    ------
    | 10 |
    ------
      i     the adress of this block in the memory is '700'.
    When we try to print i. Then compiler will search 'i' in the symbol tabl anf then see it's address
    and dthen system will go to that adress and print whatever is stored at that address.

    For that we have address operator(&).

(3) cout<<&i;
    Output will be 700.

    But no datatype: int, char, float can store the address of variable.
    For this we have pointers.

(4) int *p = &i;
    It can be understood as p is an pointer pointing towards an integer.

    cout<<&i; // 0x61ff08
    cout<<p;  // 0x61ff08

    both will give the adress of variable i.

    cout<<i;   // 10
    cout<<*p;  // 10

    both will give what is actually sotred in that particular memory location.

(5) size of pointer for anytype of datatype is same.
    int i;
    int *p1 = &i;

    char c;
    char *p2 = &c;

    cout<<sizeof(i);    // 4 as it is integer
    cout<<sizeof(c);    // 1 as it is character

    cout<<sizeof(p1);   //4
    cout<<sizeof(p2);   //4

    So size of pointer for any datatype is 4 bytes.

(4) Let's uderstand the datatypes as houses, intn is a big house and char 9is a relatively small
    house, but the size fo house doesn't determine, the adress size.
    Both the houses will have comparable adress sizes.
    So, pointers for any datatype will have same size i.e 4 bytes.
*/