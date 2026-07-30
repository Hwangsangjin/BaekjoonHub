#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    int transform = 0;
    int removed = 0;
    
    while (s != "1")
    {
        int count = 0;
        
        for (char c : s)
        {
            if (c == '1')
                ++count;
            else if (c == '0')
                ++removed;
        }
        
        string binary;
        
        while (count > 0)
        {
            binary += (count % 2) + '0';
            count /= 2;
        }
        
        reverse(binary.begin(), binary.end());
        s = binary;
        
        ++transform;
    }
    
    return {transform, removed};
}