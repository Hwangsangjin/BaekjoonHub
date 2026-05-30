#include <vector>

using namespace std;

int solution(vector<int> common)
{
    if (common[1] - common[0] == common[2] - common[1])
    {
        int diff = common[1] - common[0];
        return common.back() + diff;
    }
    else
    {
        int ratio = common[1] / common[0];
        return common.back() * ratio;
    }
}