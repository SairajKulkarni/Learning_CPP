// Problem statement: Take fahrenhiet value from user and print its corresponding celcius temperature.

#include <iostream>
using namespace std;
int main()
{
    float f, c;
    cout << "Please enter the Fahrenhiet temperature:" << endl;
    cin >> f;
    c = (5.0 / 9.0) * (f - 32);
    cout << "The temperature in celcius is: " << c << endl;

    cout << 5 / 9 << endl;
    cout << 9.0 / 5 << endl;
    cout << 4 / 3 << endl;
    cout << 9 / 5 << endl;

    return 0;
}

/*
Learnings:
Here we have defined f and c variables in folat data-type because we need the celcius value in
float and also note  that the (5/9) ratio that we have take, we have written 5.0 and 9.0
because int/int is a integer and 5/9 would simply give us zero so it was needed to be written as
float otherwise because of it becoming zero we would aalways get answer as zero for any input.
Either of 5 and 9 should be written as float because (int/float),(float/int) and (float/float) all
give float as output.

We understood that division operator '/' for when both values are integer then it will only return
the integer part of the anwer. (5/9)=0 and (9/5)=1
*/