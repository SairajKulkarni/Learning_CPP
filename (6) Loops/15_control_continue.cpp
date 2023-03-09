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
            continue;       
        }
        cout << i << " ";
        i++;
    }
    return 0;
}

/*
Learnings:
continue statement means again go to the loop and check the condition and run the loop.
    int i = 2;
    while (i <= 20)
    {
        if (i % 8 == 0)
        {
            i++;         //multiples of 8 will be missing (i.e 8,16)
            continue;       
        }
        cout << i << " ";
        i++;
    }
When we used the break statement instead of continue then when first time we came acrros the 
multiple of 8 then the loop got break and we got the output as 2, 3, 4, 5, 6, 7.
But using coontinue satement we are again checking the condition instead of breaking the loop.
So the ouput we get is 2, 3, 4, 5...,7, 9, 10,...15, 17, 18, 19, 20.
*/