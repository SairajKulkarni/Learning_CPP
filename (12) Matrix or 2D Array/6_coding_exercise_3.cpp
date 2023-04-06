/*
Question:
Odd and Even back in City


Due to an immense rise in Pollution, Home Minister is back with the Odd and Even Rule in City. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the City Police. You need to help City Police by finding out if a car numbered N will be allowed to run on Sunday?



Input Format



integer  denoting the number of the car.



Output Format



Print "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !



Sample Input

12345
12134
Sample Output

Yes
No
Explanation

1 + 3 + 5 = 9 which is divisible by 3
1 + 1 + 3 = 5 which is NOT divisible by 3 and 2+4 = 6 which is not divisble by 4.
*/

#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
void print(int n)
{
    int sum = sumOfDigits(n);
    if (sum % 2 == 0)
    {
        if (sum % 4 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else
    {
        if (sum % 3 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}
int main()
{
    int n;
    cout << "Enter the car number: " << endl;
    cin >> n;
    print(n);
    return 0;
}