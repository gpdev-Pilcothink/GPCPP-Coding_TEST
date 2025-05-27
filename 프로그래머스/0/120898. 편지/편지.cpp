#include <string>
#include <vector>

using namespace std;

class LetterSize
{
public:
    LetterSize(string message, int *answer);
};

LetterSize::LetterSize(string message, int *answer)
{
    *answer=message.length()*2;
}


int solution(string message) {
    int answer = 0;
    LetterSize pLetter(message, &answer);
    return answer;
}