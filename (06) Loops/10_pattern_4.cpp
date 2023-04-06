#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number n" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            (i % 2 == 0) ? ((j % 2 == 0) ? cout << "1" : cout << "0") : ((j % 2 == 0) ? cout << "0" : cout << "1");
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/*
Anoter way for following loop is:

while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            (i % 2 == 0) ? ((j % 2 == 0) ? cout << "1" : cout << "0") : ((j % 2 == 0) ? cout << "0" : cout << "1");
            j++;
        }
        cout << endl;
        i++;
    }

while (i <= n)
    {
        int j ;
        int k = 1;
        if(i%2==0){
            j=0;
        }
        else{
            j=1;
        }
        while (k <= i)
        {
            cout<<k;
            if(k==0){
                k=1;
            }
            else{
                k=0;
            }
        }
        cout << endl;
        i++;
    }

    instead of this we can also update in the following way:
    if(k==0)
    {
        k=1;
    }
    else{
        k=0;
    }

    k=1-k;

    if k was 0 then 1-0 then k=1; and if k was 1 than 1-1 then k=0.
*/