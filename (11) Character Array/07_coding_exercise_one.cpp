/*
Question:
Lower Upper


Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.



Input Format



Single Character .



Output Format



lowercase UPPERCASE Invalid



Sample Input

$
Sample Output

Invalid
*/

#include <iostream>
using namespace std;
void print(char input)
{
    if (input >= 'a' && input <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else if (input >= 'A' && input <= 'Z')
    {
        cout << "UPPERCASE" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}
int main()
{
    char userInput;
    cout << "Enter a character: " << endl;
    cin >> userInput;
    print(userInput);
    return 0;
}