#include <string>
#include <vector>
#include <algorithm>

using namespace std;


class LookMid
{
private:
    int result;       
public:
    LookMid();
    void Sort(vector<int> *array);
    void Look(const vector<int>& array);
    void GetResult(int *answer);
    
};

LookMid::LookMid() : result(0) {}

void LookMid::Sort(vector<int> *array)
{
    sort(array->begin(), array->end());
}

void LookMid::Look(const vector<int>& array)
{
    result=array[((float)array.size()/2)];
    
}

void LookMid::GetResult(int *answer)
{
    *answer=result;
}

int solution(vector<int> array) {
    int answer = 0;
    LookMid pLook;
    pLook.Sort(&array);
    pLook.Look(array);
    pLook.GetResult(&answer);
    return answer;
}