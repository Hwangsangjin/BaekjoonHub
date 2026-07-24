#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n)
{
    sort(strings.begin(), strings.end(),
         [n](const string& lhs, const string& rhs)
         {
             if (lhs[n] == rhs[n])
                 return lhs < rhs;
             
             return lhs[n] < rhs[n];
         });
    
    return strings;
}