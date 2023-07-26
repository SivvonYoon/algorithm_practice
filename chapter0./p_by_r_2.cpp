// 순열을 재귀적으로 해석하기
#include <bits/stdc++.h>

// 배열 선언
int a[3] = {1, 2, 3};

// 총 개수와 뽑아야할 개수 고르기
int n = 3, r = 3;

// 출력하는 함수
void print(){
    for (int i = 0 ; i < n ; i++){
        std::cout << a[i] << " ";
    }
    std::cout << '\n';
}

// 순열을 재귀적으로 뽑기
void makePermutation(int n, int r, int depth){
    // 뽑기 완료 --> 더 이상 바꿀 짝이 없다.
    if (r == depth+1){
        print();
        return ;
    }
    for (int i=depth ; i<n ; i++){
        // 순서 바꾸기 (기준 : 배열의 depth 번째 요소)
        std::swap(a[i], a[depth]);
        // 재귀 호출
        makePermutation(n, r, depth+1);
        // 순서 되돌리기 (아까 바꿔준 순서를 되돌린다.)
        std::swap(a[i], a[depth]);
    }
}

// 메인 함수 작성
int main(){
    makePermutation(n, r, 0);
    return 0;
}