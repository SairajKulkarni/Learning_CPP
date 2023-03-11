#include <iostream>
using namespace std;
void printHello(){
    cout<<"Hello"<<endl;
}
int add(int a, int b){
    return (a+b);
}
int square(int a);
int main()
{  
    printHello();
    cout<<"World"<<endl;
    cout<<add(1,3)<<endl;
    cout<<square(39)<<endl;
    return 0;
}
int square(int a){
    return a*a;
}
/*
Learnings:
(1) Use of functions organizes our work.

(2) Till now we used to write all out code inside the main function, nut using the functions we can
    call them insid emain whenever necessary.

(3) Due to this our  code becomes reusable.

(4) Debugging(finding errors) becomes easy.

(5) #include<iostream>
    using namespace std;
    void printHello(){
        cout<<"Hello";
    }
    int main(){
        printHello();   //calling of function
    }

    Here, void before the function name maeans that the function will not return anything.

(6) int add(int a, int b){
    int ans = a+b;
    return ans; // return s an integer value wherever it is called therefore it has int beofre its name.
    }
    int main(){
        int a,b;
        cin>>a>>b;
        int c = add(a, b); // calling gof function.
        cout<<c;
    }

    int square(int a){
        int ans = a*a;
        return ans;
    }
    int main(){
        int n;
        cin>>n;
        int b = square(n);
        cout<<b;
    }

(7) Basic structure of function.

    return_type name_of_function(arguments/parameters){
        ----body----
        ----of------
        ----the-----
        --function--
    }
    int main(){
        name_of_the_function(); // this is calling of the function.
    }

(8) One thing to notice iis that whenever we are calling a function it is already defined above
    in the code.
    So we come to an conculsion that, if a function A() wants to call function B(), then the
    function B should be declared above the function A, otheerwise we would geet an compilation
    error, because copiler starts compiling from top to bottom.

(9) There are 3 things associated with a function"
    (1) Declaration
    (2) Definition
    (3) Calling

    int add(int a, int b){
        return (a+b);   // body of function is also called as definition of function.
    }

    int main(){
        int c = add(2,3);   // this is calling of function.
        cout<<c;
    }


    int add(int a, int b);  // declaration of function. (forward declaration) we write body afterwards.

    int main(){
        int c=add(2,3);     // calling of function.
        cout<<c;
    }

    int add(int a, int b){
            return (a+b);   // definition of function.
    }
    In this case we will not get comilation error from compiler. We know that compilation starts,
    from top to bottom. So, we have declared the function above before calling it, we have just
    written the content(definition) of the function aferwards, compiler will understand this and
    we won't get any error.

(10) Compilation starts from top to bottom but execution starts from the main function. Then 
     wherever there is a function call,compiler will run that function and then again continue the
     execution from main.
*/