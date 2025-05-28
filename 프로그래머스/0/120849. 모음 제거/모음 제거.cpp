#include <string>
#include <vector>

using namespace std;

class erasevowel {
private:
    int pos;
    string str;

public:
    erasevowel(string str, int pos) { this->str = str; this->pos = pos; }
    void A_erase(int pos);
    void E_erase(int pos);
    void I_erase(int pos);
    void O_erase(int pos);
    void U_erase(int pos);
    string returnstr();
};

void erasevowel::A_erase(int pos) {
    if (pos >= str.size())
        return;
    int Apos = str.find("a", pos); // 모음 A위치 반환  
    if (Apos != string::npos) { //모음이 존재할경우
        str.erase(Apos, 1);
        A_erase(Apos);
    }
}
void erasevowel::E_erase(int pos) {
    if (pos >= str.size())
        return;
    int Apos = str.find("e", pos); // 모음 E위치 반환  
    if (Apos != string::npos) { //모음이 존재할경우
        str.erase(Apos, 1);
        E_erase(Apos);
    }
}
void erasevowel::I_erase(int pos) {
    if (pos >= str.size())
        return;
    int Apos = str.find("i", pos); // 모음 I위치 반환  
    if (Apos != string::npos) { //모음이 존재할경우
        str.erase(Apos, 1);
        I_erase(Apos);
    }
}
void erasevowel::O_erase(int pos) {
    if (pos >= str.size())
        return;
    int Apos = str.find("o", pos); // 모음 O위치 반환  
    if (Apos != string::npos) { //모음이 존재할경우
        str.erase(Apos, 1);
        O_erase(Apos);
    }
}
void erasevowel::U_erase(int pos) {
    if (pos >= str.size())
        return;
    int Apos = str.find("u", pos); // 모음 U위치 반환  
    if (Apos != string::npos) { //모음이 존재할경우
        str.erase(Apos, 1);
        U_erase(Apos);
    }
}
string erasevowel::returnstr() {
    return str;
}



string solution(string my_string) {
    erasevowel vowel(my_string, 0);
    vowel.A_erase(0);
    vowel.E_erase(0);
    vowel.I_erase(0);
    vowel.O_erase(0);
    vowel.U_erase(0);
    return vowel.returnstr();
}