// 재귀를 통해 조합하기
#include <bits/stdc++.h>

// 각종 변수 선언
int n = 5, r = 3, a[5] = {1, 2, 3,4 ,5};

// 출력 함수
void print(std::vector<int> idx){
    // 인덱스 벡터와 맞는 a 배열 요소를 순차적으로 출력
    for(int i : idx){
        std::cout << a[i] << " ";
    }
    std::cout << '\n';
}

// 조합 함수 선언
void combi(int start, std::vector<int> idx){
    // 출력 조건 선언
    if(idx.size()==r){
        print(idx);
        return;
    }
    // 인덱스 벡터에 요소 넣고 빼며 조합 만들기
    for(int i = start+1 ; i < n ; i++){
        // 인덱스 벡터에 요소 넣기
        idx.push_back(i);
        // 재귀 호출
        combi(i, idx);
        // 인덱스 벡터에 넣었던 요소 빼기
        idx.pop_back();
    }
}

int main(){
    // 인덱스 벡터 선언
    std::vector<int> idx;
    // 재귀 함수 호출
    combi(-1, idx);
    return 0;
}