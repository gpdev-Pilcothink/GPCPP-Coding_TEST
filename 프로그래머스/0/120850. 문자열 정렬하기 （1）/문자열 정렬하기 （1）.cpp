#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i=0; i<my_string.length(); i++)
    {
        int p=0;
        if(my_string[i]>='0' && my_string[i]<='9')
        {
            if(answer.size()>0)
            {
                for(int j=0; j<answer.size(); j++)
                {
                    if((my_string[i]-'0')>answer[j])
                       p++;
                    else
                       break;
                }
            }
            answer.insert(answer.begin() + p,1,(my_string[i]-'0'));
        }
    }

    return answer;
}