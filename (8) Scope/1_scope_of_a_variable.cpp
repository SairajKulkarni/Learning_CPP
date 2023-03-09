#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    for (int i = 0; i < 5; i++)
    {
        int x = i;
        cout << x << endl;
    }
    cout << x << endl;
    return 0;
}

/*
Learnings:
int main(){
    int i;
    for(------){
        ______
        ______
        ______
        int j;
    }
    cout<<j;
}

We can't access the variable j outside the for loop bcause it tis defined inside the for loop.
So, the exitence of j is inside the for loop only. When we try to acccess the variable j outside
the for loop then compiler will basically give a error which will mean "I don't know what is j".

So, what is scope of j?
The scope of j is between the curly brackets of for loop, outside thaht compiler doesn't know what
is j.

int main(){
    int x = 10; scope is between curly brackets of int main.
    for (int i = 0; i < 5; i++)
    {
        int x = i; scope is between the curly brackets of the for loop.
        cout << x << endl;
    }
    cout << x << endl; gives output as 10 because ti cant access the 'x' inside for loop hence it 
    will print the value of 'x' defined outside the for loop.
}
But if instead of int x = i inside the for loop we only write x = i, this means that we are 
accessing the x declared previously and it's value would be changed. And the final cout<<x;
would give output as 4.

In the above code we dont get error because scope of both the variables 'x' is different. Otherwise
we would get an error from the compiler that would basically mean 'you can not have two variables
with the same name.

Also if we try to print cout<<i; outside the for loop then compiler will give us error because i is
defined only for the 'for' loop so it's scope is inside the cury brackets of the for loop only.
*/