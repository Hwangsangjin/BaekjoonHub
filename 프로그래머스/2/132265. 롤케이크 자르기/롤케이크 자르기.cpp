#include <map>
#include <vector>

using namespace std;

int solution(vector<int> topping) 
{
    map<int, int> left, right;
    
    for (int t : topping)
        ++right[t];
    
    int answer = 0;
    
    for (int i = 0; i < topping.size() - 1; ++i)
    {
        int t = topping[i];
        
        ++left[t];
        --right[t];
        
        if (right[t] == 0)
            right.erase(t);
        
        if (left.size() == right.size())
            ++answer;
    }
    
    return answer;
}