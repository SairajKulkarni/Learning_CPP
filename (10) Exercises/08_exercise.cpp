/*
Pattern Mountain


Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   


Input Format





Constraints



0 < N < 10



Output Format





Sample Input

4
Sample Output

1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1
Explanation

Each number is separated from other by a tab.
*/
#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        if(i<n){
        for(int j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        for(int j=i+1;j<=2*n-1-i;j++){
            cout<<" \t";
        }
        int k=i;
        for(int j=(2*n-i);j<=(2*n-1);j++){
            cout<<k<<"\t";
            k--;
        }
        cout<<endl;
        }
        else if(i==n){
            int count = n-1;
            for(int j=1;j<=2*n-1;j++){
                if(j<=i){
                    cout<<j<<"\t";
                }
                else{
                    cout<<count<<"\t";
                    count--;
                }
            }
            cout<<endl;
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    print(n);
}