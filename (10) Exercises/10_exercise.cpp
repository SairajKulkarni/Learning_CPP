/*
Pattern Numbers & Stars - 1


Take as input N, a number. Print the pattern as given in output section for corresponding input.



Input Format



Enter value of N



Constraints





Output Format



All numbers and stars are Space separated



Sample Input

5
Sample Output

1 2 3 4 5
1 2 3 4 *
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *
Explanation

Catch the pattern for the corresponding input and print them accordingly.
*/
#include <iostream>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        if (i >= 2)
        {
            for (int j = n - i + 2; j <= n + i - 2; j++)
            {
                cout << "*"
                     << " ";
            }
        }
        cout<<endl;
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