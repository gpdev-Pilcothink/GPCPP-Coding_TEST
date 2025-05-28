#include <string>
#include <vector>

using namespace std;

class SameArray
{
private:
    int result;

public:
    SameArray();
    void Count(vector<int> array, int n);
    void GetResult(int *answer);
    
};
SameArray::SameArray() : result(0) {}

void SameArray::Count(vector<int> array, int n)
{
    for(vector<int>::size_type i=0; i<array.size(); i++)
    {
        if(n==array[i])
            result++;
    }
}

void SameArray::GetResult(int *answer)
{
    *answer=result;
}



int solution(vector<int> array, int n) {
    int answer = 0;
    SameArray pArray;
    pArray.Count(array,n);
    pArray.GetResult(&answer);
    return answer;
}