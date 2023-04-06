/*
Question:

Take N as input, Calculate it's reverse also Print the reverse.



Input Format





Constraints



0 <= N <= 1000000000



Output Format





Sample Input

123456789
Sample Output

987654321
Explanation

You've to calculate the reverse in a number, not just print the reverse.
*/

#include <iostream>
using namespace std;
int length(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
void print(int n)
{
    int ln = length(n);
    for (int i = 1; i <= ln; i++)
    {
        cout << (n % 10);
        n /= 10;
    }
}
int main()
{
    int n;
    cout << "Enter a  number: " << endl;
    cin >> n;
    print(n);
    return 0;
}