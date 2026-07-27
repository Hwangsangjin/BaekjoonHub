#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

string solution(string s)
{
    istringstream iss(s);
    
    int number;
    iss >> number;
    
    int minValue = number;
    int maxValue = number;
    
    while (iss >> number)
    {
        minValue = min(minValue, number);
        maxValue = max(maxValue, number);
    }
    
    return to_string(minValue) + " " + to_string(maxValue);
}