/*
Fibonacci Pattern


Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34



Input Format





Constraints



0 < N < 100



Output Format





Sample Input

4
Sample Output

0 
1    1 
2    3     5 
8   13    21    34
Explanation

Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.
*/
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0)return 0;
    else if(n==1)return 1;
    int fibonacii=fib(n-2)+fib(n-1);
    return fibonacii;
}
void print(int n){
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<fib(k)<<"\t";
            k++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number n: "<<endl;
    cin>>n;
    print(n);
}