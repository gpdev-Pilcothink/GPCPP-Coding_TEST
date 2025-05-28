#include <string>
#include <vector>
using namespace std;

class LookTaller
{
private:
    int result;

public:
    LookTaller();
    void TallerCheck(vector<int> array, int height);
    void GetResult(int *answer);

    
};

LookTaller::LookTaller() : result(0) {}

void LookTaller::TallerCheck(vector<int> array, int height)
{
    for(vector<int>::size_type i = 0; i<array.size(); i++)
    {
        if(array[i]>height)
            result++;
    }
}

void LookTaller::GetResult(int *answer)
{
    *answer=result;
}

int solution(vector<int> array, int height) {
    int answer = 0;
    LookTaller pTaller;
    pTaller.TallerCheck(array,height);
    pTaller.GetResult(&answer);
    return answer;
}