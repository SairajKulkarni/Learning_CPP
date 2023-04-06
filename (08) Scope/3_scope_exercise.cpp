#include <iostream>
using namespace std;
int x = 10; // global variable
int main()
{
    x = 12;     // here compiler knows only one x whihch is global. So the value of global x = 12.
    int x = 10; // new local variable x with value of 10 is created.
    int i;      // local variable i is defined.
    for (int i = 0; i < 5; i++)
    {
        x = i;                            // value of local variable if changing
        cout << x << "--" << ::x << endl; //  till here the value of global x is same (i.e 12)
    }
    cout << "Value of x is " << x << endl;          // last updation was in for loop so x=4
    ::x = ::x + 2;                                  // so global variable becomes 12 + 2 = 14.
    cout << "Value of global x is " << ::x << endl; // 14
    cout << i << endl;                              /* i is in the scope of main() so when i=5 the for loop is stopped but that i is
                                                    is only defined for the for loop so here garbage value will be printed as
                                                    the value for i outside the for loop is not mentioned/ initialized
                                                    instead of int i = 0 if we directly use i then this line would give output as 5*/
    return 0;
}

/*
Final Output:
0--12
1--12
2--12
3--12
4--12
Value of x is 4
Value of global x is 14
Garbage value
*/

/*
Learnings:

int arr[10];
int main(){
    arr[1]=10;
    cout<<arr[5]; // garbage value
}
Similarly as global varaibles we have global arrays also and we can use them as shown above.
*/