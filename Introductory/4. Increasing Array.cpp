/*
You are given an array of n integers. 
You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of moves.

Constraints
1 <= n <= 2x10^5
1 <= xi <= 10
*/

#include <iostream>

using num = uint64_t;

int main()
{
    num n;
    std::cin >> n;
    num *arr = new num[n];
    num moves = 0;
    for (num i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        if (i != 0)
        {
            if (arr[i] < arr[i - 1])
            {
                moves += arr[i - 1] - arr[i];
                arr[i] = arr[i - 1];
            }
        }
    }
    std::cout << moves;
}