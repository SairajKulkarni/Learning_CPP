#include <iostream>
#include <cstring>
using namespace std;
int stringCompare(char str1[], char str2[])
{
    int i = 0;
    if (strlen(str1) != strlen(str2))
    {
        return -1;
    }
    else
    {
        int i = 0;
        while (i < strlen(str1))
        {
            if (str1[i] - str2[i] == 0)
            {
                i++;
            }
            else
            {
                return -1;
            }
            return 0;
        }
    }
}

void myStrCpy(char str1[], char str2[])
{
    int n = strlen(str2);
    for (int i = 0; i <= n; i++)
    {
        str1[i] = str2[i];
    }
}

void myStrCat(char str1[], char str2[])
{
    int i = strlen(str1);
    int j = strlen(str2);
    int k = 0;
    for (int count = i; count < (i + j); count++)
    {
        str1[count] = str2[k];
        k++;
    }
}
int main()
{
    char str1[100];
    char str2[100];
    cin >> str1 >> str2;
    cout << "Before copying: " << endl;
    cout << "string 1: " << str1 << " string 2: " << str2 << endl;
    myStrCpy(str1, str2);
    cout << "After copying: " << endl;
    strncpy(str1, str2, 3);
    cout << "str1: " << str1 << " str2: " << str2 << endl;
    strcat(str1, str2);
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    char string1[100] = "abcd";
    char string2[100] = "wxyz";
    myStrCat(string1, string2);
    cout << string1 << endl;
    // strcmp(str1,str2);
    // if (strcmp(str1, str2) == 0)
    // {
    //     cout << "Equal" << endl;
    // }
    // else
    // {
    //     cout << "Not equal" << endl;
    // }
    // stringCompare(str1, str2);
    // if (stringCompare(str1, str2) == 0)
    // {
    //     cout << "Equal" << endl;
    // }
    // else
    // {
    //     cout << "Not equal" << endl;
    // }
    return 0;
}

/*
Learnings:
Inbuilt functions related to character array:
All these inbuilt functions are implemented in the header file named <cstring>
so we need to include it '#include<cstring>'.

(1) strlen :
used to find the length of string
strlen(<stringName>) OR it takes the name of the character array as the input.
strten function is implemented in the header file named <cstring>
so we need to include it '#include<cstring>'
this inbult function also counts the spaces if given as input.

CODE:
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name[100];
    cout<<"Type somehing: "<<endl;
    cin.getline(name,100);
    cout<<strlen(name)<<endl;
    return 0;
}

(2) strcmp :
used to compare two strings.
strcmp(str1, str2) it takes two strings as input and tells if the two strings are same or not.
this function has a different return type.
if the given two strings are equal then this function returns otherwise it returns non-zero vlaue.

CODE:
int main()
{
    char str1[100];
    char str2[100];
    cin >> str1 >> str2;
    if (strcmp(str1, str2) == 0)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not equal" << endl;
    }
    return 0;
}

(3) strcpy :
    Used to copy one string into another.
    Syntax- strcpy(destination_string, source_string)

    copies thre content of the sourc3e strinng into the destination string, we can say it's previous content
    is replaced by the string that is copied into it.

    char str1[100];
    char str2[100];
    cin >> str1 >> str2; // suppose our input is abc and xyz
    cout<<"Before copying: "<<endl;
    cout<<"string 1: "<<str1<<" string 2: "<<str2<<endl; abc xyz
    strcpy(str1,str2);
    cout<<"After copying: "<<endl;  // xyz xyz
    cout<<"str1: "<<str1<<" str2: "<<str2<<endl;

    this fucntion also copies the null character from the source string to destination string.
    instead of provinding character array we can also provide driectly any string instread:
    Example:
    strcpy(str1, "hello");
    In this particular case the str1 cintent is replaced by the string "hello" and null character
    "\0" gets appended just ater it automatically.

    there is another funciton that includes third parameter in the 'strncpy' function:
    strncpy(destination_string, source_string, <number of characters counting from 1, to be copied>)

    char str1[100];
    char str2[100];
    str1="abcd";
    str2="hello";
    strncpy(str1, str2, 3);
    cout<<str1<<" "<<str2<<endl;

    the result of this cout will be: held abcd
    The third parameter provided by us is 3 and hence first three characters of hello:
    i.e 'h', 'e', 'l' will replace abc and d will remain as it is hence we will get output as above
    Here, the null character is appended automatically.

(4) strcat :
    It takes 2 arguments and adds the second string/ argument at the end of string1 (first agument).
    strcat(str1,str2);
    suppose str1=abc and str2=def.
    then this will make the string1 as abcdef.
    Change is made in the first argument/string provided by us in the function.
*/