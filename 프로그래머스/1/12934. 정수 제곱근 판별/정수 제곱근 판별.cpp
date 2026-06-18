#include <cmath>

long long solution(long long n)
{
    long long x = sqrt(n);

    if (x * x == n)
        return (x + 1) * (x + 1);

    return -1;
}