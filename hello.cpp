#include <iostream>

void fib(int n){
    int a1 = 0, a2 = 1, a3 ;
    if (n >= 1) std::cout << a1 << "\n";
    if (n >= 2) std::cout << a2 << "\n";
    for (int i = 3; i <= n; i++){
        int a3 = a1 + a2;
        std::cout << a3 << "\n";
        a1 = a2;
        a2 = a3;
    }
}

int main() {
    std::cout << "Hello, World!\n";
    int n;
    std::cin >> n;
    fib(n);
}
