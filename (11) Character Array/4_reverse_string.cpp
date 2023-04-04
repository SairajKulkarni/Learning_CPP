#include <iostream>
using namespace std;

// function for finding length of character array
int length(char input[])
{
    int count = 0;
    while (input[count] != '\0')
    {
        count++;
    }
    return count;
}

// fucntion for reversing the character array
void reverse(char input[])
{
    int start = 0;
    int end = length(input) - 1;
    while (start <= end)
    {
        swap(input[start], input[end]);
        start++;
        end--;
    }
    cout << input << endl;
}

int main()
{
    char name[100];
    cout << "Enter something: " << endl;
    cin.getline(name, 100);
    reverse(name);
    return 0;
}