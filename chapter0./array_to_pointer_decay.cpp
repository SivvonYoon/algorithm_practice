// 배열을 포인터에 할당하는 경우에 대해 알아 보자.
#include <bits/stdc++.h>

int a[3] = {1, 2, 3};
int main(){
    int *c = a;
    std::cout << c << '\n';
    std::cout << &a[0] << '\n';
    std::cout << c+1 << '\n';
    std::cout << &a[1] << '\n';
    return 0;
}