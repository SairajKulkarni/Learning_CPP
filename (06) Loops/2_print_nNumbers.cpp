/*
Problem statement: Given a number n print all number sfrom 1 to n.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number n: " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
    return 0;
}