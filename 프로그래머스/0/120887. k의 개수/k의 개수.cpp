#include <string>

using namespace std;

int solution(int i, int j, int k)
{
    int answer = 0;
    
    for (int n = i; n <= j; ++n)
    {
        string s = to_string(n);
        
        for (char c : s)
        {
            if (c - '0' == k)
                ++answer;
        }
    }
    
    return answer;
}