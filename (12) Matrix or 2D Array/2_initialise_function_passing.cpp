#include <iostream>
using namespace std;
void printArray(int a[][5], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int a[5][5] = {{1, 2},
                   {3, 4}};
    int b[5][5] = {{0}};
    printArray(b, 5, 5);
    printArray(a, 5, 5);
    return 0;
}

/*
Learnings:
(1) int a[4] = {1,2,3,4}
    int a[2][3] = { {1,2,3},
                    {4,5,6} };

(2) In 2D arrays giving rows is optional but giving columns is mandatory
    int a[][x];
    we need to mention this 'x'.
    i.e mentioning the number of columns is mandatory.

    example:
    int a[][3]={ {1,2,3},
                 {4,5,6},
                 {7,8,9} }
    By initialising the array this way the first empty square bracket that denotes the rows will be
    set to 3.
    Hence, it will become a 3*3 2D matrix.

    int b[][3]={ {1,2},
                 {3,4,5},
                 {7,8} }
    This will be also interpreted as an 3*3 2D array as fllows.
    ___________
   | 1 | 2 | 0 |
   -------------
   | 3 | 4 | 5 |
   -------------
   | 7 | 8 | 0 |
   -------------
    The the entries which are not mentioned in the initialisation will be set to '0', similar to 1D array.

    int b[5][4]={{1,2},{3,4}};

    1 2 0 0
    3 4 0 0
    0 0 0 0
    0 0 0 0
    0 0 0 0

    The entries which are not provided are by default set to '0'.

    int a[10]={0};
    here the whole 1D array is initialised and all the 10 entries are sest to 0;

    int a[10][10]={{0}};
    Here also all the whole 2D array is initialised and all the entries are set to '0'.

(3) void printArray(int a[][5], int m, int n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    int main()
    {
        int a[][5] = {{1, 2},
                    {3, 4}};
        printArray(a, 2, 5);
        return 0;
    }

    As you can see above, when the 2D array is initialised and when it is passed to any function
    the columns should be same, in above example it is '5' columns.

    Also passing of number of rows in the function of the 2D array is optional.
*/