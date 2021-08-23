#include <iostream>

using NUM = uint64_t;

int get_power(NUM n, NUM f)
{
    NUM c = 0;
    while (n % f == 0)
    {
        n = n / f;
        c++;
    }
    return c;
}

NUM min(NUM a, NUM b)
{
    return (a < b) ? a : b;
}

int main()
{
    NUM n;
    std::cin >> n;
    NUM p5 = 0;
    for (NUM i = 5; i <= n; i += 5)
    {
        p5 += get_power(i, 5);
    }
    std::cout << p5 << std::endl;
}