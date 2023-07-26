// split 을 구현해 보자.
#include <bits/stdc++.h>

// split 함수 만들기 --> 반환형 : std::vector<std::string>
std::vector<std::string> split(std::string input, std::string delimiter){
    // 반환할 벡터 선언하기 (split 된 결과들)
    std::vector<std::string> ret;
    // split 할 길이
    long long pos;
    // c++ 에서 delimiter 를 사용해서 tokenize 한다는 것이 정형화된 형식인 듯함.
    // string 을 split 해서 나온 것을 token 화.
    std::string token="";
    // split
    while ((pos=input.find(delimiter)) != std::string::npos){
        std::cout<< "pos : " << pos << '\n';
        // token 얻기
        token = input.substr(0, pos);
        // 반환하는 벡터 ret 갱신하기
        ret.push_back(token);
        // input 에서 split한 부분을 지워 준다.
        input.erase(0, pos+delimiter.length());
    }
    // 마지막으로 남은 것도 ret 에 넣어 준다.
    ret.push_back(input);
    // 조각조각 split 해준 것을 반환해 준다.
    return ret;
}

int main(){
    std::string s = "안녕하세용 저는 윤시원 입니당", d = " ";
    // split 하고 반환받아 주기
    std::vector<std::string> a = split(s, d);
    for (std::string b : a){
        std::cout << b << '\n';
    }
    return 0;
}