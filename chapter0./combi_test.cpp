// combination with recursion
#include <bits/stdc++.h>

// 배열, 총 개수, 뽑을 개수 선언
int n = 5, r = 3, a[5] = {1, 2, 3, 4, 5};

// 출력 함수
void print(std::vector<int> idx){
    for(int i : idx){
        std::cout << a[i] << " ";
    }
    std::cout << '\n';
}

// 조합하기
void combi(int start, std::vector<int> idx){
    // 출력 조건
    if (idx.size() == r){
        print(idx);
        return;
    }
    // 조합하기
    for(int i=start+1 ; i<n ; i++){
        idx.push_back(i);
        combi(i, idx);
        idx.pop_back();
    }
}

int main(){
    std::vector<int> idx;
    combi(-1, idx);
    return 0;
}