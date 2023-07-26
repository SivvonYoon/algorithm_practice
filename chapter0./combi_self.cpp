// 5개 중 3개를 뽑아 조합히기
#include <bits/stdc++.h>

// 배열, 총 개수, 뽑을 개수 선언하기
int n = 5, r = 3, a[5]= {1, 2, 3, 4, 5};

// 출력하는 함수 선언하기
void print(std::vector<int> b){
    for (int i : b){
        std:: cout << a[i] << " ";
    }
    std::cout << '\n';
    return;
}

// 조합하기
void combi(int start, std::vector<int> b){
    // 출력 조건
    if (b.size()==r){
        print(b);
        return;
    }
    // 조합하기
    for (int i = start+1 ; i<n ; i++){
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

// 메인 함수 선언하기
int main(){
    std::vector<int> b;
    combi(-1, b);
    return 0;
}