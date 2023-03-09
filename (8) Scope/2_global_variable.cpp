#include <iostream>
using namespace std;
int x = 12; // global
int main()
{
    int x = 10; // local
    cout << x << endl;
    ;
    cout << ::x << endl;
    return 0;
}

/*
Learnings:

Local variables:
----------------

int main(){
    int x;
}
cout<<x;
This will give an erro because scope of 'x' is only inside the curly brackets of int main(){}.
Similarly any varible difined inside some loop is also a local variable as it's scope is also
inside the curly brackets of that particular loop.

Global variables:
-----------------

It is a variabel whose scope is not constrained by any curly brackets of loop, function, etc. We
can access, use that variable from the start of the program to the end of program, everywhere.

int x = 12;
int main(){
    int x = 10;
    cout<< x;    // 10
    cout<< ::x;  // 12
}
x with the value of 12 is a global variable and int x = 10; is a local variable it's scope is only
inside the curly braces of main function.

The aboove code will not give us any error as scope of both the x are different.

Scope resolution operaor (::)  ->
---------------------------------

For accessing the global variable we need to use the 'scope resolution operator'.
cout << ::x ; // for printing value of global 'x'.

If we don't have any local variabel with same name as the global variable as we have above in our
code then we can access and use the value of 'global x' without even using the scope resolution
operator.

We used it only to differentiate and make the compiler understand that which is the 'x' that we want.
*/
