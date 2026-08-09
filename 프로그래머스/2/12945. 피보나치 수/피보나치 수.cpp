int solution(int n)
{
    int prev2 = 0;
    int prev1 = 1;
    
    int next = prev2 + prev1;
    
    for (int i = 2; i <= n; ++i)
    {
        next = (prev2 + prev1) % 1234567;

        prev2 = prev1;
        prev1 = next;
    }
    
    return next;
}