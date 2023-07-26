#include <bits/stdc++.h>

// split 함수 만들기
std::vector<std::string> split(std::string input, std::string delimiter){
    // 반환할 결과 벡터
    std::vector<std::string> ret;
    // 임시 저장할 토큰(split 한 단어)
    std::string token = "";
    // 자를 곳까지의 거리
    long long pos;
    // 반복문을 이용해 반복 split
    while((pos=input.find(delimiter))!=std::string::npos){
        // 토큰 갱신
        token = input.substr(0, pos);
        // 반환할 결과 벡터에 토큰 저장
        ret.push_back(token);
        // input 문장에서 split 한 거 지워 주기
        input.erase(0, pos+delimiter.length());
    }
    // input 문장에 마지막으로 남은 단어도 마저 결과 벡터에 넣어 주기
    ret.push_back(input);
    return ret;
}

int main(){
    std::string input = "안녕 안녕 테스트 테스트 중 입니당", d = " ";
    std::vector<std::string> r = split(input, d);
    // 반복문을 통해 반환받은 벡터의 각 요소 출력
    for (std::string rr : r){
        std::cout << rr << '\n';
    }
    return 0;
}