#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size fo the array: " << endl;
    cin >> n;
    int a[n];
    int max = INT32_MIN;
    int min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element number: " << i + 1 << endl;
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "The largest and smallest entries in the array are: " << max << " and " << min << " respectively" << endl;
    return 0;
}

/*
Learnings:
Instead of initiating max to INT_MIN and min to INT_MAX we could also initiate them to a[0],
i.e the first element. So that we can take further input and comapre with the first element.
Both the approach are correct and makes no difference in the ifnal outcome.
*/