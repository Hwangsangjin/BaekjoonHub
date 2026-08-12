#include <cctype>
#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    vector<string> words
    {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    
    int answer = 0;
    
    for (int i = 0; i < s.length();)
    {
        if (isdigit(s[i]))
        {
            answer = answer * 10 + (s[i] - '0');
            ++i;
        }
        else
        {
            for (int digit = 0; digit < 10; ++digit)
            {
                string word = words[digit];

                if (s.substr(i, word.length()) == word)
                {
                    answer = answer * 10 + digit;
                    i += word.length();
                    break;
                }
            }
        }
    }
    
    return answer;
}