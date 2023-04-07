/*
John Loves Patterns - I
Given N, help John to print pattern upto N lines. For eg For N=5 , following pattern will be printed.

1

11

111

1001

11111

Input Format

Single number N.

Constraints

N<=1000

Output Format

Pattern corresponding to N.

Sample Input

6

Sample Output

1
11
111
1001
11111
100001
*/
#include <iostream>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "1";
        }
        cout<<endl;
    }
    for (int i = 3; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << i-1;
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    print(n);
    return 0;
}