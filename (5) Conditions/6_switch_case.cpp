#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    switch (ch)
    {

    case 'm':
    case 'M':
        cout << "Monday" << endl;
        break;
    case 'T':
        cout << "Tuesday or Thursday" << endl;
        break;
    case 'W':
        cout << "Wednesday" << endl;
        break;
    case 'F':
        cout << "Friday" << endl;
        break;
    case 'S':
        cout << "Saturday or Sunday" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
    }
    return 0;
}

/*
Learnings:
Basically it is used to avoid long ladder of if-- (else-if)--(else-if)--(else-if)--(else-if).....

Syntax of switch case is:

    char day;
    cout << "Enter the first letter of a day of the week: ";
    cin >> day;

    switch (day) {
        case 'M':
            cout << "Monday" << endl;
            break;
        case 'T':
            cout << "Tuesday or Thursday" << endl;
            break;
        case 'W':
            cout << "Wednesday" << endl;
            break;
        case 'F':
            cout << "Friday" << endl;
            break;
        case 'S':
            cout << "Saturday or Sunday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    The default case in a switch statement is optional and is executed when none of the other
    cases match the value of the expression being switched. When a default case is present, it is
    executed if and only if none of the other cases match the expression value.

    In C++, a break statement is used to exit a switch statement after a particular case is
    executed. When a break statement is encountered, execution of the switch statement is
    terminated and control is passed to the next statement after the switch block.

    In the case of the default case, there is no need to include a break statement, since the
    default case is executed only once and the switch statement is terminated immediately after
    the default case is executed. Including a break statement after the default case is not
    necessary, and would be redundant.

    Therefore, if a break statement is included after the default case, it will not have any
    effect on the program's behavior, as control will already have been transferred to the
    statement following the switch block.

    If any of the break statement is removed then condition for that partcular case will be
    checked and then the code will be executed then it will move to the next case and won't
    check the condition and directly execute the code inside it directly.

    Benifit of not using break(usecase):
    if we want that "Monday should be printed for 'm' as well as 'M' then we can write the case
    fot 'm' and we will not use the break statement and after that we will have the code for 'M'
    case and it will have break statement. So in this way by not using the break statement we can
    achieve our goal.

    case 'm':
    case 'M':
        cout << "Monday" << endl;
        break;

    If we dont use default statement then for some case which is not mentioned/ .e invalid input
    nothing will happen.

    This is all about swtitch case, it is an alternative of if else statements.
    But, I personally prefer to use if else because tit have a simple syntax as compared to
    switch-case so there are less chances fo doing some error.
*/