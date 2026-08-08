int solution(int n)
{
    int count = 0;
    int number = n;
    
    while (number > 0)
    {
        count += number % 2;
        number /= 2;
    }

    int next = n + 1;
    
    while (true)
    {
        number = next;
        int nextCount = 0;

        while (number > 0)
        {
            nextCount += number % 2;
            number /= 2;
        }

        if (nextCount == count)
            return next;

        ++next;
    }
}