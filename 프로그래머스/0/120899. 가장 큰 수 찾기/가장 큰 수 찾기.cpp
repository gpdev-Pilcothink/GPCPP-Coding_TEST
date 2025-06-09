#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max=0;
    int maxpos=0;
    for(int i=0; i<array.size(); i++)
    {
        if(array[i]>max)
        {
            max=array[i];
            maxpos=i;
        }
    }
    answer.push_back(max);
    answer.push_back(maxpos);
    return answer;
}