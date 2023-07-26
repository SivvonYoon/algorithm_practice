#include <bits/stdc++.h>

// factorial 함수를 재귀로 구현하기
int fact(int n){
    // 재귀 => 기저 사례 필수
    if ( n == 1 || n == 0){
        return 1;
    }
    // 나머지 로직은 재귀로
    return n*fact(n-1);
}

// factorial 함수를 반복문으로 구현하기
int fact_re(int n){
    int re = 1;
    for (int i=1 ; i<=n; i++){
        re *= i;
    }
    return re;
}

// fibonacci 함수를 재귀로 구현하기
int fibo(int n){
    // 재귀 --> 기저 사례 필수
    if (n==0 || n ==1){
        return n;
    }
    // 나머지 사례 --> 로직 --> 재귀로 푼다.
    return fibo(n-2)+fibo(n-1);
}

// 메인 함수 구현
int main(){
    // 인풋으로 들어갈 내용을 변수로 지정하기 (하드코딩하지 않기)
    int n = 6;
    std::cout << fact(n) << '\n';
    std::cout << fact_re(n) << '\n';
    std::cout << fibo(n) << '\n';
}