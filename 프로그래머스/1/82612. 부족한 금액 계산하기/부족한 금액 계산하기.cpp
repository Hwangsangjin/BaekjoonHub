long long solution(int price, int money, int count)
{
    long long answer = static_cast<long long>(price) * count * (count + 1) / 2;

    return answer > money ? answer - money : 0;
}