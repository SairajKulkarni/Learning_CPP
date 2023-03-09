#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <  5)
    {
        cout << "Hello" << endl;
        i++;
    }
    return 0;
}
/*
Learnings:

Basic structure/ concept of any loop.

           +------------+
initialization          |
         |    ----------|--------------------
         v    |         |                   |
+-----------------+     |                   |
| check condition | ----|--------           |
+-----------------+     |       |           |
          |             |       |           |
          v             |       v           |
         true           |     false         |
   +----------------+   |       |           |
   | execute loop   |<--+       |           |
   +----------------+           |           |
             |                  |           |
             v                  |           |
       +---------------+        |           |
       | code updation | <-------           |
       +---------------+                    |
              |                             |
              -------------------------------

If we do not update the contion then the condition will be always true and this will result in
an infinite loop and the code inside while loop wiil be executed infinite times as the condition
will bw always true. This will also happen if the update is done wrongly with respect to the 
condition of the loop.
*/