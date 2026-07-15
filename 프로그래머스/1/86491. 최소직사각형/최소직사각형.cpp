#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int maxWidth = 0;
    int maxHeight = 0;
    
    for (const auto& card : sizes)
    {
        maxWidth = max(maxWidth, max(card[0], card[1]));
        maxHeight = max(maxHeight, min(card[0], card[1]));
    }
    
    return maxWidth * maxHeight;
}