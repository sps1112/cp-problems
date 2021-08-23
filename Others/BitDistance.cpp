#include <iostream>
#include <vector>
#include <string>

int get_dis(int a, int b)
{
    int c = 0;
    int n = a ^ b;
    while (n > 0)
    {
        c += (n & 1);
        n >>= 1;
    }
    return c;
}

int print_list(std::vector<int> A)
{
    int s = 0;
    std::vector<int> pairList;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            if (A[j] != A[i])
            {
                s += 2 * get_dis(A[i], A[j]);
            }
        }
    }
    return s;
}

int main()
{
    std::vector<int> l;
    l.push_back(96);
    l.push_back(96);
    l.push_back(7);
    l.push_back(81);
    l.push_back(2);
    l.push_back(13);
    std::cout << print_list(l) << std::endl;
    return 0;
}