#include <string>

using namespace std;

int solution(string word)
{
    int answer = 0;
    int weight[] = {781, 156, 31, 6, 1};

    for (int i = 0; i < word.size(); ++i)
    {
        int index = 0;

        if (word[i] == 'E')
            index = 1;
        else if (word[i] == 'I')
            index = 2;
        else if (word[i] == 'O')
            index = 3;
        else if (word[i] == 'U')
            index = 4;

        answer += index * weight[i] + 1;
    }
    
    return answer;
}