#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;
    
    for (string word : babbling)
    {
        int index = 0;
        string previous;

        while (index < word.size())
        {
            if (word.substr(index, 3) == "aya")
            {
                if (previous == "aya")
                    break;

                previous = "aya";
                index += 3;
            }
            else if (word.substr(index, 2) == "ye")
            {
                if (previous == "ye")
                    break;

                previous = "ye";
                index += 2;
            }
            else if (word.substr(index, 3) == "woo")
            {
                if (previous == "woo")
                    break;

                previous = "woo";
                index += 3;
            }
            else if (word.substr(index, 2) == "ma")
            {
                if (previous == "ma")
                    break;

                previous = "ma";
                index += 2;
            }
            else
            {
                break;
            }
        }
        
        if (index == word.size())
            ++answer;
    }
    
    return answer;
}