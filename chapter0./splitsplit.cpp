// c++ 은 split 함수를 지원하지 않으므로 만들어 보도록 하자.
// 시간복잡도 : O(n)
#include <bits/stdc++.h>

std::vector<std::string> split(std::string input, std::string delimiter){   // delimiter : split 조건
    std::vector<std::string> ret;
    long long pos=0;
    std::string token = "";
    while ((pos = input.find(delimiter)) != std::string::npos){
        token = input.substr(0, pos);
        std::cout << "token : " << token <<'\n';
        ret.push_back(token);
        input.erase(0, pos+delimiter.length());
    }
    ret.push_back(input);
    std::cout << "input : " << input <<'\n';
    return ret;
}

int main(){
    std::string s = "안녕하세요 제 이름은 윤시원입니다.", d = " ";
    std::vector<std::string> a = split(s, d);
    for(std::string b : a){
        std::cout << b << '\n';
    }
    return 0;
}