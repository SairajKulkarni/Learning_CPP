/*
Typecasting means converting one data type to another.
There is 2 types of type casting - implicit and explicit. 
*/

#include<iostream>
using namespace std;
int main(){
    char c='a';
    cout<<c+3<<endl;

    /*
    + operator is defined for integers not for characters. So + operator converts 'a' to its 
    ascii value and 97=3 =100.
    This type casting is done by compiler we are not doing anything so this is called as 
    "Implicit typecasting".
    */
   cout<<c*3<<endl;
   cout<<'A'+0<<endl;

   char ch = 'A';
   cout<<ch+1<<endl;
   ch+=1;
   cout<<ch<<endl;

   char Ch = 'A'+'A'; 
   cout<<Ch<<endl;

   char ch2 = 'A';
   int val = (int)ch2;
   cout<<val<<endl;

   bool h = true;
   int x = (int)h;
   cout<<h<<endl;

   int y=70;
   char ch3 = (char)y;
   cout<<ch3<<endl;

   return 0;
}

/*
Learnings:
(1)Implicit typecasting;
   char + int = int
   int +  = float 
   int/float = float
   int/int = int
   char + char = int 

(2)heirarchy of datatypes:
   1)float
   2)int
   3)char
   4)bool
   All that are lower can be convertted to upper data-
   
(3)char ch = 'A';
   cout<<ch+1<<endl; Here output is 66 beacause '+' operator is defined for integer so it 
   implicitly typcasts ch into intteger.
   ch+=1; here ch+1 will be 66 but as we are sotriing back in ch which we have defined as 
   character so it is being impplicitly typecasted by us from integer back into character and hence
   ASCII value of 66 i.e B gets printed.
   cout<<ch<<endl;

(4)WRAP AROUND:
   we know that char+char = int 
   cout<<'A'+'A'<<endl; Here the output will be 130.
   char ch = 'A'+'A' 
   cout<<ch; Here the ascii value corresponding to 130 will get printed.
   But as we know the range of char data-type is -128 to 127 so there is nothing matching to 130.
   So what will happen 130 = 127 +3 so these extra 3 will be counted from -128,-127 and then -126
   So actually the value corresponding to -126 will get printed.(i.e 'é').
   This whole thing is called as 'wrap around'.

(5)We know that -(2^31) to (2^31)-1 is the range of integers. 
   So, INT_MIN = -(2^31) and INT_MAX = (2^31)-1

(6)In point two from typecasting from lower heirarchy to higher is called as implicit typecasting 
   and it is done automatically by compiler and we dont have to do anything.
   Whereas, conversion from higher to lower is called as explicit typecasting.

(7)Examples of explicit typecasting are:
   char ch2 = 'A';
   int val = (int)ch2;
   cout<<val<<endl;

   bool h = true;
   int x = (int)h;
   cout<<h<<endl;

   int y=70;
   char ch3 = (char)y;
   cout<<ch3<<endl;

   We havve to mention in what data-type we want ot typecast and we are doing it according to our 
   requirement so, it is called exxplicit typecasting.

(8)Problem with typecasting:
   The problem with typecasting is data-loss and this happens in case of explicit typecasting.
   In case of implicit typecasting the lower hierarchy data-types have less size than the higher
   one's so it is easily implicitly typecasted by the compiler.
   But in case of explicit type casting we basically convert from one data-type to another OR
   we can say the higher one's in to the lower priority one's so in this can if we have some big 
   integer value it can be sored in integer easily but when we typecast it into character,
   we know size of char data-type is 1 byte so there can be some data loss and only one byte size
   of integer will get stored and other data will get loss.
   
*/