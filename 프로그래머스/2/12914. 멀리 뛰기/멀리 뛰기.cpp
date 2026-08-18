long long solution(int n)
{
    if (n == 1)
        return 1;
    
    long long prev2 = 1;
    long long prev1 = 2;

    for (int i = 3; i <= n; ++i)
    {
        long long next = (prev2 + prev1) % 1234567;

        prev2 = prev1;
        prev1 = next;
    }
    
    return prev1;
}