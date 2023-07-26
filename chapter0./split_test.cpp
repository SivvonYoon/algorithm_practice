// split 을 해 보자
#include <bits/stdc++.h>

// split 함수
std::vector<std::string> split(std::string input, std::string delimiter){
    // 반환할 것을 선언해 주자
    std::vector<std::string> ret;
    // 빈 토큰을 선언해 주자
    std::string token = "";
    // 잘라줄 길이를 나타내 주는 pos 도 선언해 주자.
    long long pos;
    while ((pos=input.find(delimiter))!= std::string::npos){
        // 우선 token을 갱신해 보자.
        token = input.substr(0, pos);
        // token 을 반환할 벡터에 넣어 주자.
        ret.push_back(token);
        // input 에서도 잘라내 주자.
        input.erase(0, pos+delimiter.length());
    }
    // 마지막으로 input 에 남아있는 것도 반환할 벡터에 넣어 주자.
    ret.push_back(input);
    // 반환해 주자.
    return ret;
}

// 메인 함수
int main(){
    // 자를 거랑 자르는 기준 설정해 주자.
    std::string a = "안녕하세요? 테스트 중입니당", d = " ";
    std::vector<std::string> b = split(a, d);
    for (std::string s : b){
        std::cout << s << '\n';
    }
    return 0;
}