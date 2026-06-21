#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

bool solution(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    return count(s.begin(), s.end(), 'p') == count(s.begin(), s.end(), 'y');
}