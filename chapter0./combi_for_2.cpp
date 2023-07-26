// for 문을 중첩해서 조합하기
#include <bits/stdc++.h>

int n = 5, r = 3, a[5] = {1, 2, 3, 4, 5};

int main(){
    int h = 0;
    for(int i = 0 ; i < n ; i ++){
        for (int j = i+1 ; j<n; j++){
            for (int k = j+1 ; k<n ; k++){
                h+=1;
                std::cout << h << " : " << a[i] << " " << a[j] << " " << a[k] << '\n';
            }
        }
    }
    return 0;
}