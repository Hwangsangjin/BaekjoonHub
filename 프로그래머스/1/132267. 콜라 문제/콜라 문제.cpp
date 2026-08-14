int solution(int a, int b, int n)
{
    int answer = 0;
    
    while (n >= a)
    {
        int count = n / a * b;
        answer += count;
        n = n % a + count;
    }
    
    return answer;
}