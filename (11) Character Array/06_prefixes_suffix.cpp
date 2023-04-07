#include <iostream>
#include <cstring>
using namespace std;

// function to print the prefixes of input character array
void prefixes(char input[])
{
    for (int i = 0; i < strlen(input); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}

// function to print the suffixes of input chracter array
void suffixes(char input[])
{
    for (int i = 0; i < strlen(input); i++)
    {
        for (int j = strlen(input) - i; j < strlen(input); j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of character array: " << endl;
    cin >> n;
    char inputString[n];
    cout << "Type something: " << endl;
    cin >> inputString;
    prefixes(inputString);
    suffixes(inputString);
    return 0;
}