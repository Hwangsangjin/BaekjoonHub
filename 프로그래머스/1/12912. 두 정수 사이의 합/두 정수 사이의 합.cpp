#include <algorithm>

using namespace std;

long long solution(int a, int b)
{
    long long start = min(a, b);
    long long end = max(a, b);

    return (start + end) * (end - start + 1) / 2;
}