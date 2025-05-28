#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    
    int answer = 0;
    
    
    int max=0;
    int maxi=0;
    int sum=0;
    for(int i=0; i<3; i++)
    {
        if(sides[i]>max)
        {
            max=sides[i];
            maxi=i;
        }
    }
     for(int i=0; i<3; i++)
    {
        if(i!=maxi)
            sum+=sides[i];
    }
    if(max<sum)
        answer=1;
    else
        answer=2;
    
    
    return answer;
}