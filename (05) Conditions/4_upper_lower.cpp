#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character: " << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is a uppercase alphabet" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a lowercase alphabet" << endl;
    }
    else
    {
        cout << "you have given an invalid input" << endl;
    }
    return 0;
}

/*
Learnings:
We can compare two character as the <= , >= operators are difned for integerss hence while 
comparing both the character inmplicit typecasting is taking place whihch converrts both the 
operands into inetgers by mapping to their respective ASCII values.s
*/