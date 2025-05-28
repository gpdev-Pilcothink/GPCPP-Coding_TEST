#include <string>
#include <vector>

using namespace std;

class StringSame{
private:
    int result;
public:
    StringSame();
    void Check(vector<string> s1, vector<string> s2);
    void GetResult(int *answer);
};

StringSame::StringSame() : result(0) {}
void StringSame::Check(vector<string> s1, vector<string> s2)
{
    for(int i=0; i<s1.size(); i++)
    {
        for(int j=0; j<s2.size(); j++)
        {
            
            if(s1[i]==s2[j])
            {
                result++;
            }
            
        }
    }
}
void StringSame::GetResult(int *answer)
{
    *answer=result;
}


int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    StringSame pString;
    pString.Check(s1,s2);
    pString.GetResult(&answer);
    return answer;
}