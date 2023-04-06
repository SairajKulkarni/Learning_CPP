#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number n: " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        // for spaces
        while (j <= (n - i))
        {
            cout << " ";
            j++;
        }

        // for increasing numbers
        int k = i;
        while (j <= n)
        {
            cout << k;
            j++;
            k++;
        }

        // for decreasing values.
        int z = 2 * i - 2;
        while (j < (n + i))
        {
            cout << z;
            j++;
            z--;
        }
        cout << endl;
        i++;
    }
    return 0;
}