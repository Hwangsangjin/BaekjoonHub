#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> hall;
    
    for (int i = 0; i < score.size(); ++i)
    {
        hall.push_back(score[i]);

        sort(hall.begin(), hall.end());

        if (hall.size() > k)
            hall.erase(hall.begin());

        answer.push_back(hall[0]);
    }
    
    return answer;
}