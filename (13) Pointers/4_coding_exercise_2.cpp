/*
Question:
Calculating Function 1
For a positive integer n let's define a function f:

f(n) = - 1 + 2 - 3 + .. + ( - 1)^n*n

Your task is to calculate f(n) for a given integer n.

Output Format

Print f(n)

Sample Input

5
4
Sample Output

-3
2
*/

#include<iostream>
#include<cmath>
using namespace std;
void print(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=pow(-1,i)*i;
    }
    cout<<sum;
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    print(n);
    return 0;
}