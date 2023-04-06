#include <iostream>
using namespace std;
int main()
{
    int i;
    cin >> i;
    if (i == 5)
    {
        cout << "Inside if" << endl;
    }
    else if (i > 5)
    {
        cout << "Inside else-if" << endl;
    }
    else
    {
        cout << "Inside else" << endl;
    }
    return 0;
}

/*
Learnings:
1) Differnece between if, else-if and if,if:
   (i)
    if(){

    }
    else if(){

    }
    Here if the 'if' condition is true then 'else-if' contdition will not be checked.

   (ii)
    if(){

    }
    if(){

    }
    Here after checking the first condition doesn't matter if true or false, the second 'if'
    block will also be checked.

    Let's take an example and understand:
    Problem statement: Take input from user and if the input is 1 then make it zero, if the input
    is zero make it one.

    int i;
    cin>>i;
    if(i==0){
        i=1;
    }
    else if(i==1){
        i=0;
    }
    cout<<i<<endl;
    This code will work as expected.

    int i;
    cin>>i;
    if(i==0){
        i=1;
    }
    if(i==1){
        i=0;
    }
    cout<<i<<endl;
    This code will only work fine if the value entered by the user is 1 and it will make it zero,
    but if the user enters the value 0, then first if block will run and make it zero, again
    second if block will run and again as we changed i to 1, then it will make it 0 again.

    So the difference is clear.

(2) Any nonzero postive value is true and 0 is false.

(3) if(x || y){}
    here suppose x and y are conditions then:

    if x is true condition the y wont even be checked, it is because, for OR if any one operand
    is true then the entire result is true. but if the first condition is false then it will check
    for the other condition.

    similarly for if there was AND(&&) instead of OR(||) then if first condition is false then
    second condition wont even be checked. but if first is true then secon will aslo be checked
    because the entire result is true only it both the conditions are true.

(4) Evaluation of a logical expression stops as soon as the final value is known.
    if(false && x){}
    x condition won't be checked.

    if(true || x){}
    x condition won't be checked.
*/