// 역참조 연산자
#include <bits/stdc++.h>
int main(){
    std::string a = "abcda";
    std::string *b = &a;
    std::cout << b << '\n';
    std::cout << *b << '\n';
    return 0;
}