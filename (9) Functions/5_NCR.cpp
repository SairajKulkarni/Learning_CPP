/*
Problem statement: Given n, r calculate nCr = (n)!/((n-r)!*(r)!)
*/
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = n; i >= 2; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    return ((factorial(n)) / ((factorial(n - r)) * (factorial(r))));
}
int main()
{
    int n, r;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter r: " << endl;
    cin >> r;
    cout << nCr(n, r);
    return 0;
}