#include <string>

using namespace std;

string solution(int a, int b)
{
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    
    int total = b - 1;
    
    for (int i = 0; i < a - 1; ++i)
        total += days[i];
    
    return week[(5 + total) % 7];
}