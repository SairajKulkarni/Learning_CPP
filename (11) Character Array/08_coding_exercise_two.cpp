/*
Question:
Hollow Diamond Pattern


Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *


Input Format





Constraints



0 < N < 10 (where N is an odd number)



Output Format





Sample Input

5
Sample Output

*	*	*   *   *
*	*	    *   *
* 	            *
* 	*       *   *
* 	*	*   *   *
Explanation

*   *   *   *   *   *   *
*   *   *       *   *   *
*   *               *   *
*                       *
*   *               *   *
*   *   *       *   *   *
*   *   *   *   *   *   *


Each '*' is separated from other by a tab.
*/

#include <iostream>
using namespace std;
void print(int n)
{
    int a = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*"
                     << "\t";
            }
            cout << endl;
        }
        else if (i > 1 && i <= a)
        {
            for (int j = 1; j <= a - i + 1; j++)
            {
                cout << "*"
                     << "\t";
            }
            for (int j = a - i + 2; j <= a + i - 2; j++)
            {
                cout << "\t";
            }
            for (int j = a + i - 1; j <= n; j++)
            {
                cout << "*"
                     << "\t";
            }
            cout << endl;
        }
        else if (i > a && i < n)
        {
            for (int j = 1; j <= i - a + 1; j++)
            {
                cout << "*"
                     << "\t";
            }
            for (int j = i - a + 2; j < n + a - i; j++)
            {
                cout << "\t";
            }
            for (int j = n + a - i; j <= n; j++)
            {
                cout << "*"
                     << "\t";
            }
            cout << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter any number odd number between 0 and 10 : " << endl;
    cin >> n;
    print(n);
    return 0;
}