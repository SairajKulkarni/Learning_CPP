#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    while (i <= 20)
    {
        if (i % 8 == 0)
        {
            i++;         //multiples of 8 will be missing (i.e 8,16)
            break;       
        }
        cout << i << " ";
        i++;
    }
    return 0;
}

/*
Learnings:
loop(){
    _________
    _________
    _________
}

this loop gets temninated after running some times and after updation when the condition becomes
false.

Here we will talk about altering the flow of loop using 'break' keyword.

loop(){
    _______
    _______
    _______
    break;
    _______
    _______
    _______
}
First, the condtion of the loop will be checked if it is true then the loop will run and as soon
as the break statement is hit then the loop is terminated, we come outside of our loop. In this
way we have altered the flow of our loop using break keyword.

loop(){
    _____
    _____
    loop(){
    _______
    _______
    _______
    break;
    _______
    _______
    _______
    }
    _______
    _______
}
Here when the break statement is reached the innermost loop will be breaked and we are still
inside the outer loop.
So, the point to remember here is that whenever the break statement is hit, the innermost loop
is broken.
If the break statement was outside, i.e in the outer loop then only it would be broken. As follows
loop(){
    _____
    _____
    loop(){
    _______
    _______
    _______
    _______
    _______
    _______
    }
    break;
    _______
    _______
}

int i = 2;
    while (i <= 20)
    {
        if (i % 8 == 0)
        {
            i++;         //multiples of 8 will be missing (i.e 8,16)
            break;       
        }
        cout << i << " ";
        i++;
    }

We know break statement is used for breaking loops, so when the above break statement hit,
i.e when i=8, then directly loop is terminated. So the output will be 2, 3, 4, 5, 6, 7.
*/