/*
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

01 02 09 10 25
04 03 08 11 24
05 06 07 12 23
16 15 14 13 22
17 18 19 20 21

Your task is to find out the number in row y and column x.

Input

The first input line contains an integer t: the number of tests.

After this, there are t lines, each containing integers y and x.

Output

For each test, print the number in row y and column x.

Constraints
1 ≤t≤ 10^5
1 ≤y,x≤ 10^9
*/

#include <iostream>
#include <vector>

using NUM = uint64_t;

NUM get_max(NUM a, NUM b)
{
    return (a > b) ? a : b;
}

NUM get_min(NUM a, NUM b)
{
    return (a < b) ? a : b;
}

NUM get_val(NUM x, NUM y)
{
    NUM max = get_max(x, y);
    NUM min = get_min(x, y);
    if (!(((max % 2) == 0) ^ (min == x)))
    {
        return ((max * max) - (min - 1));
    }
    else
    {
        return (((max - 1) * (max - 1)) + (min));
    }
}

int main()
{
    NUM n;
    std::cin >> n;
    std::vector<NUM> output;
    for (NUM i = 0; i < n; i++)
    {
        NUM x, y;
        std::cin >> y >> x;
        output.push_back(get_val(x, y));
    }
    for (int i = 0; i < output.size(); i++)
    {
        std::cout << output[i] << std::endl;
    }
}