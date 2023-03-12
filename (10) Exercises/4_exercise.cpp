/*
卐 Ganesha's Pattern
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *


Input Format



Enter value of N ( >=5 )



Constraints



5 <= N <= 99



Output Format



Print the required pattern.



Sample Input

7
Sample Output

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Explanation

Catch the pattern for the corresponding input and print it accordingly.
*/
#include <iostream>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == ((n + 1) / 2))
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || (j >= (n + 1) / 2) && j <= n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else if (i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == n || (j <= (n + 1) / 2) && j >= 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else if (i > 1 && i < (n + 1) / 2)
        {
            for (int j = 1; j <= (n+1)/2; j++)
            {
                if (j == 1 || j == (n + 1) / 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == n || j == (n + 1) / 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter a odd number greater than 5: " << endl;
    cin >> n;
    print(n);
    return 0;
}