#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    int a= 'a'-'A';
    
    for(int i=0; i<myString.length(); i++)
    {
        if( myString[i]>='A' && myString[i]<='Z')
            myString[i]+=a;
        
    }
    
    string *answer = &myString;
    
    return *answer;
}