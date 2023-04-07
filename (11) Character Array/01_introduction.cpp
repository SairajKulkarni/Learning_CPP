#include <iostream>
using namespace std;
int main()
{
    char name[100];
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Your name is " << name << endl;
    name[4] = 'x';
    name[3] = 'd';
    name[1] = '\0';
    cout << "Your name is " << name << endl;
    return 0;
}

/*
Learnings:
(1) Declaration of integer array:
    int a[10];
    size = 10*4 = 40 bytes. (1 integer is of 1 byte)

    Declaration of character array:
    char b[10];
    size = 10*1 = 10 bytes. (1 character is of 1 byte)

(2) Taking input in integer array:
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    Taking input in character array:
    cin>>b; // if b is name of array.
    this will directly take input of complete character array.

(3) Printing the content of integer array.
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    Printing the content of character array.
    cout<<b;

(4) Storing inside array:

    Integer array:
    While the for loop runs till the given limit for every value we can give input.

    Character array:
    int n;
    cin>>n;
    char ch[n];
    cin>>ch;

    // Suppose we give input as "coding";
    then the counting for storing each alphabet wiil start from '0' and end with '5' for the
    alphabet 'g' and at the '6th' index null character will be appended automatically which is for
    stopping.
    '\0' this is null character and it's ASCII value is '0'.
    The null character is terminator.

    So if you create a character array of size 'n' the counting will staart from '0' till 'n-1'
    and we can store alphabet from index no. '0' till 'n-2' because 'n-1 th' index will be containing
    null character '\0'.

    So for array of size n you can only store 'n-1' characters as the last would be null character.
*/