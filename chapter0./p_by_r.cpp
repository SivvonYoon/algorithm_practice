// n 개 중 r 개를 뽑는 순열에 대한 코드를 재귀함수로 작성해 보기
#include <bits/stdc++.h>

// 먼저 배열을 지정하고, n 과 r 도 지정해 주기
int a[3] = {1, 2, 3};
int n = 3, r = 3;

// 결과를 출력해주는 함수 작성하기
void print(){
    for (int i = 0 ; i<n ; i++){
        std::cout << a[i] << " ";
    }
    std::cout << '\n';
    return ;
}

// 재귀함수를 이용한 순열 뽑기 코드 작성하기
void makePermutation(int n, int r, int depth){
    if (r == depth){
        print();
        return ;
    }
    for (int i=depth ; i < n ; i++){
        // 경우의 수 따지기(swap 을 이용해 다음 순열 경우의 수 찾아나가기)
        std::swap(a[i], a[depth]);
        // 재귀 이용하기
        makePermutation(n, r, depth+1);
        // 바꾼 것 되돌려주기
        std::swap(a[i], a[depth]);
    }
    return ;
}

// 메인 함수 작성하기
int main(){
    makePermutation(n,r,0);
    return 0;
}