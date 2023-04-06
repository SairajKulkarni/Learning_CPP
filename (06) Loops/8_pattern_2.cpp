#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int k=1;
        while(j<=(n-i)){
            cout<<" ";
            j++;
        }
        while(j<(n+i)){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}