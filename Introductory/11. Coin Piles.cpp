/*
You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.

Your task is to efficiently find out if you can empty both the piles.

Input

The first input line has an integer t: the number of tests.

After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output

For each test, print "YES" if you can empty the piles and "NO" otherwise.

Constraints
1≤t≤105
0≤a,b≤109
*/

#include <iostream>

using NUM = int64_t;

int main()
{
    NUM t;
    std::cin >> t;
    for (NUM i = 0; i < t; i++)
    {
        NUM a, b;
        std::cin >> a >> b;
        NUM n1 = 2 * b - a;
        NUM n2 = 2 * a - b;
        // std::cout << n1 << " X " << n2 << std::endl;
        if (n1 % 3 == 0 && n1 >= 0 && n2 % 3 == 0 && n2 >= 0)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
}