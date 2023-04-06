#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of rows of 2D array: " << endl;
    cin >> m;
    cout << "Enter the number of columns of 2D array: " << endl;
    cin >> n;
    int arr[m][n];
    // Taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing rowise
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Printing columnwise
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Learnings:
(1) Syntax:
    int <name of array> [][]
    first square bracket is for the number of rows.
    secind square bracket is for the number of columns.

    example:
    int a[2][4];
    an 3d array with 2 rows and 4 columns will be created.

    numbering of both the rows and colums start from zero.

(2) Taking input:
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    This is called as taking the input row-wise.
*/