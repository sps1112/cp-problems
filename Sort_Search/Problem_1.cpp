#include <iostream>
#include <vector>

using NUM = uint64_t;

void insert_and_sort(std::vector<NUM> list, NUM a)
{
    int index = search_num(list, a, 0, list.size());
}

int search_num(std::vector<NUM> list, NUM a, int start, int end)
{
}

bool has_num(std::vector<NUM> list, NUM a)
{
    return (search_num(list, a, 0, list.size()) != -1);
    /*for (num i = 0; i < n; i++)
    {
        if (list[i] == a)
        {
            return true;
        }
    }
    return false;*/
}

int main()
{
    NUM n;
    std::cin >> n;
    std::vector<NUM> list;
    for (NUM i = 0; i < n; i++)
    {
        NUM a;
        std::cin >> a;
        if (!has_num(list, a))
        {
            insert_and_sort(list, a);
        }
    }
    std::cout << list.size();
}