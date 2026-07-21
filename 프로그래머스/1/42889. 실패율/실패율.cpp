#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages)
{
    vector<int> answer;
    vector<int> count(N + 2, 0);
    
    for (int player : stages)
        ++count[player];
    
    int players = stages.size();
    vector<pair<int, double>> failRates;

    for (int i = 1; i <= N; ++i)
    {
        double rate = 0.0;
        if (players != 0)
            rate = static_cast<double>(count[i]) / players;
        
        failRates.push_back({i, rate});
        players -= count[i];
    }
    
    sort(failRates.begin(), failRates.end(),
         [](const auto& a, const auto& b)
         {
             if (a.second == b.second)
                 return a.first < b.first;
             
             return a.second > b.second;
         });
    
    for (const auto& entry : failRates)
        answer.push_back(entry.first);
    
    return answer;
}