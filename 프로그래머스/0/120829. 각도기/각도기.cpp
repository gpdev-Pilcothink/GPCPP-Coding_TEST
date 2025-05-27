#include <string>
#include <vector>

using namespace std;

class Angle {

private:
    int result;

public:
    Angle(int angle);
    int GetResult() {return result;}

};

Angle::Angle(int angle){
    if(angle>0 &&  angle<90)
        result=1;
    else if(angle==90)
        result=2;
    else if(angle>90 && angle<180)
        result=3;
    else 
        result=4;
}


int solution(int angle) {
    int answer = 0;
    
    Angle pAngle(angle);
    answer=pAngle.GetResult();
    return answer;
}