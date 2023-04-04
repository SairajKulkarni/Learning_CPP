#include <iostream>
using namespace std;
int length(char input[])
{
    int count = 0;
    while (input[count] != '\0')
    {
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Your name is: " << name << endl;
    cout << length(name);
    return 0;
}

/*
Learnings:

*/