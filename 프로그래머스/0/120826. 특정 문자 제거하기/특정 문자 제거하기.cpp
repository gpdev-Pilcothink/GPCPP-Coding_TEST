#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    int pos = my_string.find(letter);
    while (pos != -1)
    {
        my_string.erase(pos,1);
        pos = my_string.find(letter);
    }
    string answer = my_string;
    return answer;
}