/*
Question:
Chewbacca and Number
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.



Input Format



The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.



Constraints



x <= 100000000000000000



Output Format



Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.



Sample Input

4545
Sample Output

4444
Explanation

There are many numbers form after inverting the digit. For minimum number, check if inverting digit is less than or greater than the original digit. If it is less, then invert it otherwise leave it.
*/

#include <iostream>
using namespace std;
int length(long long int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
void print(long long int n)
{
    int ln = length(n);
    int arr[ln];
    for (int i = ln - 1; i >= 0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < ln; i++)
    {
        if ((9 - arr[i]) < (arr[i]))
        {
            arr[i] = 9 - arr[i];
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < ln; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    long long int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    print(n);
    return 0;
}