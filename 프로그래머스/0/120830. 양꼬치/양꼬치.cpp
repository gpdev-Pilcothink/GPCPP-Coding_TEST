#include <string>
#include <vector>

using namespace std;

class EatStore{
private:
    int price;

public:
    EatStore(int n, int k);
    int WhatPrice() {return price;}
};

EatStore::EatStore(int n, int k){
    k-=n/10;
    price=12000*n+2000*k;
}


int solution(int n, int k) {
    int answer = 0;
    
    EatStore pEat(n,k);
    answer=pEat.WhatPrice();
    
    return answer;
}