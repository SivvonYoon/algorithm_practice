#include <bits/stdc++.h>

//벡터에서 순열 뽑기
int main(){
    // 벡터 선언 (정렬이 안 되어 있을 경우)
    std::vector<int> a = {2, 1, 3};

    // 벡터가 정렬이 안 되어 있을 경우는 sorting 을 해서 정렬을 해 주어야 함. (그래야 다 찾음.)
    // sort(a.begin(), a.end());

    // do-while 문 선언
    do{
        for (int i : a){
            std::cout << i << " ";
        }
        std::cout << '\n';
    }while(std::next_permutation(a.begin(), a.end()));

    return 0;
}