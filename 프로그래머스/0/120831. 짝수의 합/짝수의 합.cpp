#include <string>
#include <vector>

using namespace std;

class Calc{
private:
    int result;
public:
    Calc(int n);
    void GetResult(int *answer);
};

Calc::Calc(int n) : result(0)
{
    if(n==0){
        result = 0;
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
            result+=i;
    }
}

void Calc::GetResult(int *answer)
{
    *answer=result;
}



int solution(int n) {
    int answer = 0;
    
    Calc pCalc(n);
    pCalc.GetResult(&answer);
    
    return answer;
}