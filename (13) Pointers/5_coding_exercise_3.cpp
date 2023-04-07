/*
Question:
Chocolate Feast
Little Bobby loves chocolate. He frequently goes to his favorite store, Penny Auntie, to buy them. They are having a promotion at Penny Auntie. If Bobby saves enough wrappers, he can turn them in for a free chocolate.

For example, Bobby has to spend on bars of chocolate that cost each. He can turn in wrappers to receive another bar. Initially, he buys bars and has wrappers after eating them. He turns in of them, leaving him with , for more bars. After eating those two, he has wrappers, turns in leaving him with wrapper and his new bar. Once he eats that one, he has wrappers and turns them in for another bar. After eating that one, he only has wrapper, and his feast ends. Overall, he has eaten bars.

Function Description

Complete the print function in the editor below. It must print the number of chocolates Bobby can eat after taking full advantage of the promotion.

print has the following parameter(s):

n: an integer representing Bobby's initial amount of money

c: an integer representing the cost of a chocolate bar

m: an integer representing the number of wrappers he can turn in for a free bar

Note: Little Bobby will always turn in his wrappers if he has enough to get a free chocolate.



Sample Input

10 2 5
12 4 4
6 2 2
Sample Output

6
3
5
Explanation

Bobby makes the following 3 trips to the store:

He spends his 10 dollars on 5 chocolates at 2 dollars apiece. He then eats them and exchanges all 5 wrappers to get 1  more. He eats 6 chocolates.

He spends his 12 dollars on 3  chocolates at 4 dollars apiece. He has 3 wrappers, but needs 4 to trade for his next chocolate. He eats 3 chocolates.

He spends 6 dollars on 3 chocolates at 2 dollars apiece. He then exchanges 2 of the 3 wrappers for 1 additional piece. Next, he uses his third leftover chocolate wrapper from his initial purchase with the wrapper from his trade-in to do a second trade-in for 1 more piece. At this point he has 1 wrapper left, which is not enough to perform another trade-in. He eats 5 chocolates.

*/

#include<iostream>
using namespace std;
void print(int n, int m, int c){
    int x=n/m;

    if(x==c){
        x+=1;
        cout<<x;
    }
    else if(x<c){
        cout<<x;
    }
    else{
        int y = x;
        while(x>=c){
            y+=1;
            x--;
        }
        cout<<y;
    }
}
int main(){
    int n,m,c;
    cout<<"Enter the initial amount: "<<endl;
    cin>>n;
    cout<<"Enter the cost of each bar: "<<endl;
    cin>>m;
    cout<<"Enter the number of rappers for which he can exchange and get a bar: "<<endl;
    cin>>c;
    print(n, m, c);
    return 0;
}