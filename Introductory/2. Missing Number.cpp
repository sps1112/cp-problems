/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2<= n <= 2*10^5
*/

#include <iostream>

using num = int;

num main()
{
    num n;
    std::cin >> n;
    num *list = new num[n - 1];
    for (num i = 0; i < n - 1; i++)
    {
        num newN;
        std::cin >> newN;
        list[newN - 1] = newN;
    }
    int m = n;
    for (int i = 0; i < n - 1; i++)
    {
        if (list[i] == 0)
        {
            m = i + 1;
            break;
        }
    }
    std::cout << m;
}
