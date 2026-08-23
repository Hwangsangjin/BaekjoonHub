#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;
    
    for (int start = 0; start <= discount.size() - 10; ++start)
    {
        unordered_map<string, int> count;

        for (int day = start; day < start + 10; ++day)
            ++count[discount[day]];

        bool isMatch = true;
        
        for (int index = 0; index < want.size(); ++index)
        {
            if (count[want[index]] != number[index])
            {
                isMatch = false;
                break;
            }
        }
            
        if (isMatch)
            ++answer;
    }
    
    return answer;
}