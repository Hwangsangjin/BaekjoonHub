#include <stack>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer(numbers.size());
    stack<int> stack;
    
    for (int i = numbers.size() - 1; i >= 0; --i)
    {
        while (!stack.empty() && stack.top() <= numbers[i])
            stack.pop();

        if (stack.empty())
            answer[i] = -1;
        else
            answer[i] = stack.top();

        stack.push(numbers[i]);
    }
    
    return answer;
}