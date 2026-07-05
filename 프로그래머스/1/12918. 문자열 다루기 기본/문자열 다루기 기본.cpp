#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

bool solution(string s)
{
    return (s.length() == 4 || s.length() == 6) && all_of(s.begin(), s.end(), ::isdigit);
}