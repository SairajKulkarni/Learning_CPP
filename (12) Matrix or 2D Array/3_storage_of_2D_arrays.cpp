#include <iostream>
using namespace std;
int main()
{

    return 0;
}

/*
Learnings:
(1) Suppose we have a 2D array of 5*5 then it is stored as a 1D array in memory of size 25* bytes.
(2) There are 2 ways to store 2D array in 1D array :
    (a) Row major:
        int a[2][3];

        [1, 2, 3,
         4, 5, 6]

        [1, 2, 3, 4, 5, 6]

    (b) Column major:
        int a[2][3];

        [1, 2, 3,
         4, 5, 6]

         [1, 4, 2, 5, 3, 6]

(3) Row major format of storing the 2D array into 1D array is most commonly used so we will see more about it.

    int a[5][5];
    a[2][1]=7;

    0 0 0 0 0
    0 0 0 0 0
    0 7 0 0 0
    0 0 0 0 0
    0 0 0 0 0

    Now for storing this 2D array in the memory a 1D array will be created of index number starting from
    0 to 24.

    So '7' is stored at (2,1) in the 2D aray but we need to find at what index in 1D array in memory
    would be this '7' stored.

    so let's see row major format:
    [0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0]
    So, indexing is started from 0 so the number '7' is stored at 11th index in the 1D array.

    a[2][1] = 2*5 + 1 = 11
    Here '5' is the number of columns which is included in the calculation for storing 2D array in 1D
    format.

    a[i][j] = i*c + j;
    c is the number of columns.

    Hence, the number of columns is included in the calculation (formula), so mentioning the columns
    is mandatory, but mentionind the rows is optional.

(4) Row major:
    ----------
    int a[R][C];
    a[i][j] = i*C + j

    Column major:
    -------------

    a[i][j] = j*C + i;

    So, in both cases column is mandatory.
*/