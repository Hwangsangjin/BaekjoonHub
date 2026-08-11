#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    int total = brown + yellow;

    for (int height = 3; height * height <= total; ++height)
    {
        int width = total / height;

        if (width * height == total && (width - 2) * (height - 2) == yellow)
            return {width, height};
    }
}