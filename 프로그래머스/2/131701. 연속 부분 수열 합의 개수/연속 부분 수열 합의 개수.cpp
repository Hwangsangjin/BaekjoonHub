#include <set>
#include <vector>

using namespace std;

int solution(vector<int> elements)
{
    int n = elements.size();

    vector<int> extended = elements;

    for (int i = 0; i < n; ++i)
        extended.push_back(elements[i]);

    set<int> sums;

    for (int i = 0; i < n; ++i)
    {
        int current_sum = 0;

        for (int j = 0; j < n; ++j)
        {
            current_sum += extended[i + j];
            sums.insert(current_sum);
        }
    }

    return sums.size();
}