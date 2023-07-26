// 중첩 for 문으로 조합 구현하기
#include <bits/stdc++.h>

// 변수 선언
int n = 5, r = 3, a[5] = {1, 2, 3, 4, 5};

// 메인 함수 실행
int main(){
    for (int i = 0; i<n ; i++){
        for (int j = i+1; j<n; j++){
            for(int k = j+1 ; k<n ; k++){
                std::cout << a[i] << " " << a[j] << " " << a[k] << '\n';
            }
        }
    }
    return 0;
}