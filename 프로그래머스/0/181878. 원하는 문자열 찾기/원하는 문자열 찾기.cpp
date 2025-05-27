#include <string>
#include <vector>

using namespace std;
    int answer = 0;

int solution(string myString, string pat) {
    
    int same='a'-'A';
    
    for(int i=0; i<myString.length(); i++)
    {
        if(myString[i]>='A'&& myString[i]<='Z')
            myString[i] += same;
    }
    for(int i=0; i<pat.length(); i++)
    {
        if(pat[i]>='A'&& pat[i]<='Z')
            pat[i] += same;
    }
    if(myString.find(pat) != string::npos)
        answer=1;
    
    return answer;
}