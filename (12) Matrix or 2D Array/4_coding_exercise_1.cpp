/*
Qurestion:
----------

Check prime


Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".



Input Format





Constraints



2 < N <= 1000000000



Output Format





Sample Input

3
Sample Output

Prime
Explanation

The output is case specific
*/

#include <iostream>
using namespace std;
void print(int n)
{
    int i = 2;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            break;
        }
        else
        {
            continue;
        }
    }
    if (i == n)
    {
        cout << "Prime";
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