/*
Pattern Triangle


Take N (number of rows), print the following pattern (for N = 4).

                       1
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4


Input Format





Constraints



0 < N < 10



Output Format





Sample Input

4
Sample Output

            1
        2	3	2
    3	4	5	4	3
4	5	6	7	6	5	4
Explanation

Each number is separated from other by a tab.


*/
#include <iostream>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " \t";
        }
        int count = i;
        for (int j = n - i + 1; j <= n; j++)
        {
            cout << count << "\t";
            count++;
        }
        int k = 2 * (i - 1);
        for (int j = n + i - 1; j >= n + 1; j--)
        {
            cout << k << "\t";
            k--;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    print(n);
    return 0;
}