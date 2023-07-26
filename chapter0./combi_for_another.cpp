// 또다른 방식으로 중첩 for 문을 이용해 조합하기
#include <bits/stdc++.h>

// 변수 선언하기
int n = 5, r = 3, a[5]={1,2,3,4,5};

// 메인 함수
int main(){
    for (int i = 0 ; i < n ; i++){
        for (int j=0 ; j<i ; j++){
            for (int k=0 ; k<j ; k++){
                std::cout << a[i] << " " << a[j] << " " << a[k] << '\n';
            }
        }
    }
    return 0;
}