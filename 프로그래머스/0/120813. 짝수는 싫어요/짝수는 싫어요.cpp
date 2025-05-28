#include <string>
#include <vector>

using namespace std;

class OddNum
{
private:
    vector<int> result;
    
public:
    OddNum();
    void LookOddNum(int n);
    void GetResult(vector<int> *answer);
};

OddNum::OddNum() {}

void OddNum::LookOddNum(int n)
{
    for(int i=0; i<=n; i++)
    {
        if(i%2==1)
            result.push_back(i);
    }
}

void OddNum::GetResult(vector<int> *answer)
{
    *answer=result;   
}

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    OddNum pOdd;
    pOdd.LookOddNum(n);
    pOdd.GetResult(&answer);
    return answer;
}