#include <cctype>
#include <string>

using namespace std;

string solution(string s, int n)
{
    for (char& c : s)
    {
        if (!isalpha(c))
            continue;

        char base = isupper(c) ? 'A' : 'a';
        c = (c - base + n) % 26 + base;
    }

    return s;
}