#include <iostream>
using namespace std;
int main()
{
    cout << (5 & 3) << endl;
    cout << (5 | 3) << endl;
    cout << (3 | 7) << endl;
    cout << ~(5) << endl;
    cout << ~(1) << endl;
    cout << (5 ^ 3) << endl;
    cout << (5 ^ 0) << endl;
    cout << (5 ^ 5) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;
    cout << (5 >> 1) << endl;
    return 0;
}

/*
Learnings:
(1) Bitwise AND(&) operator:
    0 & 0 = 0
    0 & 1 = 0
    1 & 0 = 0
    1 & 1 = 1

    example: (5 & 3)
        101
    &   011
    *********
        001 -> 1 in decimal
        cout<<(5&3)<<endl;
        the out put will be decimal '1'.

    example: (5 & 6)
        101
    &   110
    *********
        100 -> 4 in decimal
        cout<<(5&6)<<endl;
        the out put will be decimal '4'.


(2) Bitwise OR(|) operator:
    0 | 0 = 0
    0 | 1 = 1
    1 | 0 = 1
    1 | 1 = 1

    example: (5 | 3)
        101
    |   011
    *********
        111 -> 7 in decimal
        cout<<(5|3)<<endl;
        the output will be decimal '7'.

    example: (5 | 6)
        101
    |   110
    *********
        111 -> 7 in decimal
        cout<<(5|6)<<endl;
        the output will be decimal '7'.

(3) Bitwise NOT(~) operator:
    Flip all the bits the of bnary representation of a number.

    ~(1) = 0
    ~(0) = 1

    But it is not straight forward as it looks. Beacause sign bit of the binary number will also
    flipped. So negation will guve negative sign to positive number and vice-versa, and for the
    calculation of magnitude we need to find 2's complement.

    ~(5)
    5 -> 101
    ~(5) -> 010
    But remeber the number will have negative sign as the sign bit is also flipped by the negation
    operator.

    So for calculating magnitude fo the number we will find out it's 2's complement
    101 (1's complement)
    + 1
    ***
    110 (binary representation of 6)
    So, the output of cout<<~(5)<<endl; is '-6'.

(4) Biitwise XOR(^) operator.
    If both the bits are sma ethen the output is '0' otherwise '1'.

    0 ^ 0 = 0
    0 ^ 1 = 1
    1 ^ 0 = 1
    1 ^ 1 = 0

    cout<<(5^3)<<endl;

    5 -> 101
    3 -> 011 (^)
    ************
    ans  110 (binary representation of 6)
    So the output will be 6.

    Properties:
    (1) xor of any number with zero will be the number itself. [a ^ 0 = a]
    (2) xor of any number with itself will be zero as all the bits fo both the numbers will match
        and xor gives zreo for as ouput if both the bits are zero.  [a ^ a = 0]
    (3) xor is associative.

    Where we can make use of these properties?
    Suppose we are given 2n +1 number and every number occurs twice except one number so, we want
    to find that which is that number, that occurs only once.
    For this purpose we will xor all the numbers and those numbers occuring twice will cancel out
    and we will get the number that is occuring only once.

(5) Left shift operator (x << y):
    (a) The left shift (<<) operator shifts the bits of the left operand to the left by a number of
    positions specified by the right operand.
    (b) The left operand is a numeric value, and the right operand is an integer value that specifies
    the number of positions to shift.
    (c) The left shift operator multiplies the left operand by 2 raised to the power of the right
    operand.

    Example:
    5 << 1
    0101 << 1
    1010 -> 10 in decimal
    cout<<(5<<1)<<endl;
    the output will be decimal '10'

    7 << 2
    0111 << 2
    11100 -> 28 in decimal
    cout<<(7<<2)<<endl;
    the output will be decimal '28'

    Simple calculation.
    output of : x << y will be:
    x * 2^(y).
    For (7 << 2)
    Output is 7 * 2^(2) = 7*4 = 28

    In the above examples, the left operand is shifted to the left by a number of positions
    specified by the right operand (1 and 2, respectively), and the resulting binary value is
    converted to its decimal equivalent using the standard method.

(6) Right shift operator (x >> y):
    (a) The right shift (>>) operator shifts the bits of the left operand to the right by a number of
    positions specified by the right operand.
    (b) The left operand is a numeric value, and the right operand is an integer value that specifies
    the number of positions to shift.
    (c) The right shift operator divides the left operand by 2 raised to the power of the right
    operand.

    So formula for x >> y is:
    x >> y = x divided by 2^y.
    If the answer is in floating point then only the integer part of that answer is considered.

    Example:
    5 >> 1  (5 divided by 2^1) = 2.5, But only integer part will be considered, so answer = '2'.
    0101 >> 1
    0010 -> 2 in decimal
    cout<<(5>>1)<<endl;
    the output will be decimal '2'

    7 >> 2 (7 divided by 2^2) = 1.75, But only integer part will be considered, so answer = '1'.
    0111 >> 2
    0001 -> 1 in decimal
    cout<<(7>>2)<<endl;
    the output will be decimal '1'

    In the above examples, the left operand is shifted to the right by a number of positions
    specified by the right operand (1 and 2, respectively), and the resulting binary value is
    converted to its decimal equivalent using the standard method.
*/