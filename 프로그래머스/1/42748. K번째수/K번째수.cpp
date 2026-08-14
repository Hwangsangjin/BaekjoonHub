#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    
    for (const vector<int>& command : commands)
    {
        vector<int> temp;

        for (int index = command[0] - 1; index < command[1]; ++index)
            temp.push_back(array[index]);

        sort(temp.begin(), temp.end());

        answer.push_back(temp[command[2] - 1]);
    }
    
    return answer;
}