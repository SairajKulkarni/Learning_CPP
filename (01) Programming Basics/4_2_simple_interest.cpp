#include <iostream>
using namespace std;
int main()
{
    int p, r, t;
    cout<<endl;
    cout << "Enter the principal amount" << endl;
    cin >> p;
    cout<<endl;
    cout << "Enter the rate of interest" << endl;
    cin >> r;
    cout<<endl;
    cout << "Enter the time period" << endl;
    cin >> t;
    cout<<endl;
    int SI = (p * r * t) / 100;
    cout << "Therefore the simple interest is " << SI << endl;
    return 0;
}