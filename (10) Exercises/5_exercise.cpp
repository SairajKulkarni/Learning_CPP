/*
Pattern HourGlass


Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4 
                              3 2 1 0 1 2 3 
                                2 1 0 1 2 
                                  1 0 1 
                                    0 
                                  1 0 1 
                                2 1 0 1 2 
                              3 2 1 0 1 2 3 
                            4 3 2 1 0 1 2 3 4 
                          5 4 3 2 1 0 1 2 3 4 5


Input Format



Take N as input.



Constraints



N <= 20



Output Format



Pattern should be printed with a space between every two values.



Sample Input

5
Sample Output

 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4 
     3 2 1 0 1 2 3 
       2 1 0 1 2 
         1 0 1 
           0 
         1 0 1 
       2 1 0 1 2 
     3 2 1 0 1 2 3 
   4 3 2 1 0 1 2 3 4 
 5 4 3 2 1 0 1 2 3 4 5
*/
#include <iostream>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        int k = n + 1 - i;
        for (int j = i; j <= n + 1; j++)
        {
            cout << k << " ";
            k--;
        }
        int x = 1;
        for (int j = n + 2; j <= 2 * n + 2 - i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        int k = n + 1 - i;
        for (int j = i; j <= n + 1; j++)
        {
            cout << k << " ";
            k--;
        }
        int x = 1;
        for (int j = n + 2; j <= 2 * n + 2 - i; j++)
        {
            cout << x << " ";
            x++;
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