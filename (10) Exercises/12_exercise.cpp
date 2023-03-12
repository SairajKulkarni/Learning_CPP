#include<iostream>
using namespace std;
void print(int n1,int n2){
    for(int i=1;i<=n1;i++){
        if((3*i+2)%n2!=0){
            cout<<(3*i+2)<<endl;
        }
        else{
            n1+=1; // because we have to print n1 terms and if it is not divisible then that many terms 
                   // will be missing so we increase the value of n1 by 1 every time the term is divisible
                   // so that we get exactly n1 number of terms.
        }
    }
}
int main(){
    int n1,n2;
    cout<<"Enter n1: "<<endl;
    cin>>n1;
    cout<<"Enter n2: "<<endl;
    cin>>n2;
    print(n1,n2);
}