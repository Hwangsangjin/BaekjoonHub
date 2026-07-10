#include <string>

using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    int len = p.length();

    for (int i = 0; i <= t.length() - len; ++i)
    {
        if (t.substr(i, len) <= p)
            ++answer;
    }

    return answer;
}