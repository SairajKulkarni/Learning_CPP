#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cout<<"Enter the element number: "<<i+1<<endl;
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"The sum of elements of the array is: "<<sum<<endl;
    return 0;
}