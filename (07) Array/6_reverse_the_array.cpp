/*
Problem statement: Actually revese the array.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size fo array: " << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Before reversing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
    }
    cout << endl << "After reversing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}