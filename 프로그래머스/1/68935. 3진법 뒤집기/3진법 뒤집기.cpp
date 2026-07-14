#include <vector>

using namespace std;

int solution(int n)
{
    vector<int> ternary;
    
    while (n > 0)
    {
        ternary.push_back(n % 3);
        n /= 3;
    }
    
    int answer = 0;
    
    for (const int digit : ternary)
        answer = answer * 3 + digit;
    
    return answer;
}