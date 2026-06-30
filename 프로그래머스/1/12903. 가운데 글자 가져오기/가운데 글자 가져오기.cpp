#include <string>

using namespace std;

string solution(string s)
{
    int length = s.length();

    if (length % 2 == 0)
        return s.substr(length / 2 - 1, 2);
    
    return s.substr(length / 2, 1);
}