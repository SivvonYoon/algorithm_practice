#include <bits/stdc++.h>

int a[3] = {1, 2, 3};
int n = 3, r = 3;        // n 개 중 r 개 뽑기

// print 함수 선언 --> 배열 a 내부의 요소들을 순차적으로 출력
void print(){
    std::cout << "a = [ ";
    for (int i = 0; i < r; i++){
        std::cout << a[i] << " ";
    }
    std::cout << "]\n";
}

void makePermutation(int n, int r, int depth){
    if (r == depth){
        std::cout << "================== this is the answer : ";
        print();
        return ;
    }
    for (int i = depth; i < n; i++){
        std::swap(a[i], a[depth]);
        std::cout << depth << " <--> " << i << " 를 바꾼다. ";
        print();
        makePermutation(n, r, depth + 1);
        std::swap(a[i], a[depth]);
        std::cout << depth << " <--> " << i << " 를 다시 바꾼다. ";
        print();
    }
    return ;
}

int main(){
    makePermutation(n,r,0);
    return 0;
}