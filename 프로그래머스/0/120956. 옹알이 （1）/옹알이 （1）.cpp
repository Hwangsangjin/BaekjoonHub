#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;
    vector<string> words = {"aya", "ye", "woo", "ma"};
    
    for (string s : babbling)
    {
        for (string word : words)
        {
            size_t pos = s.find(word);
            
            if (pos != string::npos)
                s.replace(pos, word.length(), " ");
        }
        
        bool canSpeak = true;
        
        for (char c: s)
        {
            if (c != ' ')
            {
                canSpeak = false;
                break;
            }
        }
        
        if (canSpeak)
            ++answer;
    }
    
    return answer;
}