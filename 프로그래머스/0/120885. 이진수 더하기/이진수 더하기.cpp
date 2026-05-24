#include <algorithm>
#include <string>

using namespace std;

string solution(string bin1, string bin2)
{
    string answer;
    int sum = stoi(bin1, nullptr, 2) + stoi(bin2, nullptr, 2);
    
    do
    {
        answer += (sum % 2) + '0';
        sum /= 2;
    }
    while (sum > 0);
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}