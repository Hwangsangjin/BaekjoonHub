#include <cmath>

using namespace std;

int solution(int left, int right)
{
    int answer = 0;
    
    for (int i = left; i <= right; ++i)
    {
        int root = sqrt(i);
        answer += (root * root == i) ? -i : i;
    }
    
    return answer;
}