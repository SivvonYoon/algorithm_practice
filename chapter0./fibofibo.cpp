// fibonacci 함수를 재귀로 구현해 보자.
#include <bits/stdc++.h>

int n = 7;

int fibo(int k){
    // 기본 조건
    if (k == 0 || k ==1){
        return k;
    }
    return fibo(k-1)+fibo(k-2);
}

int main(){
    std::cout<< "따라서 피보나치 수열의 5번째 요소 : "<< fibo(n) <<'\n';
    return 0;
}