#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Hello" << endl;
    }
    return 0;
}

/*
The only difference between while loop and for loop is that the initialization of variable,
checking of condition, updation of value of variable all are at 3 different places in while loop
whereas they are at one single place in for loop in one signle line.

example:
Print hello 5 times.

Using while loop:
int i=1;                     initialization of variable
while(i<=5){                 checking of condition
    cout<<"Hello"<<endl;
    i++;                     updation of variable after runing the code
}

Using for loop:
for(int i=1;i<+5;i++){      all 3 things are done in one single line
    cout<<"Hello"<<endl;
}

*/