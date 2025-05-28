#include <string>
#include <vector>

using namespace std;

class TwoNumbers
{
private:
    vector<int> result;
public:
    TwoNumbers();
    void TwoTimes(vector<int> numbers);
    void GetResult(vector<int> *answer);
};

TwoNumbers::TwoNumbers() {}

void TwoNumbers::TwoTimes(vector<int> numbers)
{
    for(vector<int>::size_type i=0; i<numbers.size(); i++)
    {
        result.push_back(numbers[i]*2);
    }
}

void TwoNumbers::GetResult(vector<int> *answer)
{
    *answer=result;
}

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    TwoNumbers pTwo;
    pTwo.TwoTimes(numbers);
    pTwo.GetResult(&answer);
    return answer;
}