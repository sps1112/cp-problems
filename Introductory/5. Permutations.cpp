/*
A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input

The only input line contains an integer n.

Output

Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1 <= n <= 10^6
*/

#include <iostream>
#include <vector>

using NUM = int;

bool valid_pair(NUM a, NUM b)
{
    return (abs(a - b) > 1);
}

bool check(std::vector<NUM> list)
{
    for (int i = 0; i < list.size() - 1; i++)
    {
        if (!valid_pair(list[i], list[i + 1]))
        {
            return false;
        }
    }
    return true;
}

bool permutate(std::vector<NUM> list)
{
    bool status = false;
    for (int i = 0; i < list.size(); i++)
    {
        int a = list[i];
    }
    return status;
}

int main()
{
    NUM n;
    std::cin >> n;
    std::vector<NUM> list;
    for (NUM i = 0; i < n; i++)
    {
        list.push_back(i + 1);
    }
    if (permutate(list))
    {
        for (NUM i = 0; i < n; i++)
        {
            std::cout << list[i] << " ";
        }
    }
    else
    {
        std::cout << "NO SOLUTION" << std::endl;
    }
}