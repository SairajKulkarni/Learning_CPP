#include<iostream>
using namespace std;
int main(){
    // int a[1000000];
    int a[10];
    cout<<a[-1];
    return 0;
}

/*
Learnings:

Segmentation fault/ Run time error:

If we make array of szie 10 and try to print the value at 100 place or -1, then we will get
segmentaton fault or run time error.

Basically oof you try to access the memory which doesn't belong to you then you will get run time
error or segmentation fault.

Also the maximum size of array that you can make is 10^5 - 10^6, if we try to make array of larger
size than this hten we will get run time error OR segmentation fault.
*/