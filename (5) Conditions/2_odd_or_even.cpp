#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter a number: " << endl;
    cin >> i;
    if (i % 2 == 0)
    {
        cout << "The nummber: " << i << " is even" << endl;
    }
    else
    {
        cout << "The number: " << i << " is odd" << endl;
    }

    return 0;
}