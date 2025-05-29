#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    
    vector<int> numarr;
    int max=-100000000;
    
    
    for(int i=0; i<numbers.size(); i++)
    {
        for(int j=i+1; j<numbers.size(); j++)
        {
            numarr.push_back(numbers[i]*numbers[j]);
        }
    }
    for(int i=0; i<numarr.size(); i++)
    {
        if(max<=numarr[i])
        {
            max=numarr[i];
        }
    }
    
    
    
    int answer = max;
    return answer;
}