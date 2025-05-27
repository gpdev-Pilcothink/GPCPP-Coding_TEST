#include <string>
#include <vector>
#include <cmath>

using namespace std;

class SqrtCheck
{
private:
    int result;

public:
    SqrtCheck(int n);
    void GetResult(int *answer);

};

SqrtCheck::SqrtCheck(int n)
{
    if(n<0){
        result = 2;
        return;
    }
    int check = static_cast<int>(sqrt(n));
    if(check*check==n)
        result=1;
    else
        result=2;
    
}
void SqrtCheck::GetResult(int *answer)
{
    *answer = result;
}



int solution(int n) {
    int answer = 0;
    SqrtCheck pSqrt(n);
    pSqrt.GetResult(&answer);
    return answer;
}