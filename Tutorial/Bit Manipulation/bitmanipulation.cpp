1)Binary Left Shift->
N=N<<2; //shifting 2 times
N = N << i; //N=N*(2^i);

2)Binary Right Shift->
N=N>>2; //shifting 2 times
N = N >> i; //N=N/(2^i);

3)Checking for ith Set Bit
          a) For this we take a variable int i = 1; and left shift it i times.
b)We then take the and operation with the number if set then greater than zero else zero.

L03 : Counting Number Of Set Bits
a)Right shift till the number is greater than zero and continously take and with 1.
b)If after & we get greater than one than increase the count.alignas
                        
     while (num)
{
    if (num & 1)
        count++;
    num = num >> 1;
}

->Second Approach -
    int hammingWeight(uint32_t n)
{
    int count = 0;

    while (n)
    {
        n &= (n - 1);
        count++;
    }

    return count;
}
/*n &(n - 1) drops the lowest set bit.It's a neat little bit trick.

This runs only number of times there are bits

    Let's use n = 00101100 as an example. This binary representation has three 1s.

    If n = 00101100,
       then n - 1 = 00101011, so n &(n - 1) = 00101100 & 00101011 = 00101000. Count = 1.

                              If n = 00101000,
       then n - 1 = 00100111, so n &(n - 1) = 00101000 & 00100111 = 00100000. Count = 2.

                              If n = 00100000,
       then n - 1 = 00011111, so n &(n - 1) = 00100000 & 00011111 = 00000000. Count = 3.

                              n is now zero,
       so the while loop ends, and the final count(the numbers of set bits) is returned. */

4) XOR and its properties ->A ^ A = 0. A ^ 0 = A.

5)All Pair Sum XOR -> draw a matrix of all the sums and we will find that all reapeat except diagonal a+a;
hence just sum all numbers and multiply by two

7)Total Sum of all Pair XOR -