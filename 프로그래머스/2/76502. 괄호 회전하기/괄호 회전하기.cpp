#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

static const unordered_map<char, char> bracketPair
{
    {')', '('},
    {']', '['},
    {'}', '{'}
};

bool isValid(const string& s, int start)
{
    stack<char> stk;
    size_t len = s.length();
    
    for (size_t i = 0; i < len; ++i)
    {
        char c = s[(start + i) % len];
        
        if (bracketPair.count(c))
        {
            if (stk.empty() || stk.top() != bracketPair.at(c))
                return false;

            stk.pop();
        }
        else
            stk.push(c);
    }
    
    return stk.empty();
}

int solution(string s)
{
    int answer = 0;
    
    for (int i = 0; i < s.length(); ++i)
        answer += isValid(s, i);
    
    return answer;
}