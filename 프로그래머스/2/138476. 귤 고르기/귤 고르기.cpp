#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(int k, vector<int> tangerine)
{
    unordered_map<int, int> frequency;
    
    for (int size : tangerine)
        ++frequency[size];
    
    vector<int> counts;
    
    for (const auto& pair : frequency)
        counts.push_back(pair.second);
    
    sort(counts.begin(), counts.end(), greater<int>());
    
    int answer = 0;
    
    for (int quantity : counts)
    {
        k -= quantity;
        ++answer;
        
        if (k <= 0)
            break;
    }
    
    return answer;
}