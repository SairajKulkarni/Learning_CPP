#include <iostream>
using namespace std;
int main()
{
    char name[100];
    cout << "Enter your name: " << endl;
    cin.getline(name, 100, 'o');
    cout << "Your name is: " << name << endl;
    return 0;
}

/*
Learnings:
(1) "cin>>" will stop taking input as soon as it encounters:
    (a) spaces
    (b) tabs
    (c) new line character '\n'

(2) To avoid this and in order to take spaces as input we use the function "cin.getline()",
    this function takes 2 arguments first is the name of character array

    This function stops taking input only when it encounters nbew line character.

    char name[100];
    cout<<"Enter your name: "<<endl;
    cin.getline(name,100);
    cout<<"Your name is: "<<name<<endl;

    Here we can give seconfd argument of cin.getline() function maximum as the size of character
    array created it can't be greater than that otherwise we will get error.

(3) There is also a third parameter in the 'pcin.getline()' function which is a "delimiter"
    character. It is an optional parameter but first two are compulsory.

    So, the syntax for cin.getline(), function would look as follows:
    cin.getline(<character array name>, <size>, <delimiter character>)

    This is delimiter chaaracter can be percieved as a new line character because if we see the
    working looks same but it actually acts as a breaking point.

    If we don't mention the delimiter character then by defalt it is new line character '\n'.
    So, when this new line character is encountered the fucntion stops taking input.

    See the following example:
    cin.getline(input, 100, 'o');

    Suppose wew ggive input as "Hello World"
    And we try to print this by using cout: Our output will be only "Hell"
    This is because we have set third parameter in function as 'o'. Hence when 'o'
    is encountered in the input then the function stops.
*/