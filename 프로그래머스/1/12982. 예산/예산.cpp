#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget)
{
    sort(d.begin(), d.end());

    int answer = 0;
    
    for (int money : d)
    {
        if (budget < money)
            break;

        budget -= money;
        ++answer;
    }
    
    return answer;
}