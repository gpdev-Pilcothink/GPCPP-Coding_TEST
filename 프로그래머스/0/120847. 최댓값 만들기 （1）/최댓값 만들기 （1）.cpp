#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int max=0;
    int max2=0;
    
    for(int i=0; i< numbers.size();  i++)
    {
        if(numbers[i]>max)
        {
            max2 = max;
            max = numbers[i];
        }
        else if(numbers[i]>max2)
        {
            max2=numbers[i];
        }
        
    };

   
    
    int answer = max*max2;
    return answer;
}
