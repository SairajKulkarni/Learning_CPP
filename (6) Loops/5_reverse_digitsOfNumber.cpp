/*
Problem: Given a number N reverse it.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    // int rev_num = 0;
    // while(n){
    //     int last_dig = n%10;
    //     rev_num=rev_num*10+last_dig;
    //     n/=10;
    // }
    // cout<<"The reversed number is "<<rev_num<<endl;

    while (n)
    {
        cout << n % 10;
        n /= 10;
    }
    return 0;
}

/*
Learnings:
The above commented out code gives 1 output for 100 but i should be 001.
So, to solve this erro we will do a simplet hing we will directly print the last digit.

But, in second approach we re only printing one digit at a time, starting from last. In first 
approach we were storing the reversed number but here we are not storing it. so we can' peerform 
any approach on the reversed number.

So the approach one is correct approach. Second approach is only printing the digits of the number
in a reversed order not storing it.

So for solving the problem with current array we cant solve this problem we need to study the arrays 
concept.

If we try to reverse INT_MAX the reverse will be greter than INT_MAX so it can't be sotred in 4
bytes so wrap around concept will be applied here and we will get some other number as output.
This is called integer overflow.
*/