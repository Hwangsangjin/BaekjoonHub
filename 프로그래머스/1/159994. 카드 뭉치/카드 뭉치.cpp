#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    int index1 = 0;
    int index2 = 0;
    
    for (string word : goal)
    {
        if (index1 < cards1.size() && cards1[index1] == word)
            ++index1;
        else if (index2 < cards2.size() && cards2[index2] == word)
            ++index2;
        else
            return "No";
    }
    
    return "Yes";
}