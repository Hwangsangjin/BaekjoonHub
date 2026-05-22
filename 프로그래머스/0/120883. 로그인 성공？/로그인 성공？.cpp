#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db)
{
    for (const vector<string>& data : db)
    {
        if (data[0] == id_pw[0] && data[1] == id_pw[1])
            return "login";
        
        if (data[0] == id_pw[0])
            return "wrong pw";
    }
    
    return "fail";
}