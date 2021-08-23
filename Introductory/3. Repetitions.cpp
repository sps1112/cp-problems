/* 
You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1<= n <= 10^6
*/

#include <iostream>

long l = 1000001;

int main()
{
    char *line = new char[l];
    std::cin.getline(line, l);
    char prev = line[0];
    int maxLength = 1;
    int length = 1;
    for (int i = 1; i < l && line[i] != char(0); i++)
    {
        if (line[i] != prev)
        {
            length = 1;
        }
        else
        {
            length++;
        }
        if (length >= maxLength)
        {
            maxLength = length;
        }
        prev = line[i];
    }
    std::cout << maxLength;
}
