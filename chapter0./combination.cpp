#include <bits/stdc++.h>

// 총 개수 ,뽑을 개수, 배열 선언
int n =5, k=3, a[5]={1,2,3,4,5};

// 출력 함수 선언
void print(std::vector<int> b){
    for(int i : b){
        std::cout << a[i] << " ";
    }
    std::cout << '\n';
    return;
}

// 조합하는 함수 만들기
void combi(int start, std::vector<int> b){
    if (b.size() == k){
        print(b);
        return;
    }
    for(int i = start+1 ; i<n ; i++){
        b.push_back(i);
        // 재귀 호출
        combi(i, b);
        b.pop_back();
    }
    return;
}

// 메인함수 작성
int main(){
    std::vector<int> b;
    combi(-1, b);
    return 0;
}