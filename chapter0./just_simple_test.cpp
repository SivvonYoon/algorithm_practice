#include <bits/stdc++.h>

int i;
std::string s = "sivvon";

// * : asterisk operator (에스터리스크)
int main(){
    i = 0;
    int *a = & i;           // int * a : &i == (i라는 주소를 담는 포인터) --> 포인터의 정의 : <타입> * 형태
    std::cout << a << '\n';
    std::string *b = &s;    // string 타입 변수의 메모리 주소를 담을 때는 string * 형태로 선언해야 함.
    std::cout << b << '\n';
    return 0;
}