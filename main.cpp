#include <iostream>
#include <cmath>

long int factorial(int n);

int sum(int n);

int prime(int n);

int pointer();

int main() {
    //指针测试
    pointer();

    int i = 15;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Please Enter a Number:";
//    std::cin >> i;
    std::cout << "factorial: " << factorial(i) << std::endl;
    std::cout << "sum: " << sum(i) << std::endl;
    std::cout << "prime: ";
    for (int j = 0; j < i; ++j) {
        int p = prime(j);
        if (p > 0) {
            std::cout << p << " ";
        }
    }

    return 0;
}

int sum(int n) {
    int p = 0;
    if (n <= 0) {
        return 0;
    } else {
        return sum(n - 1) + n;
    }
}

long int factorial(int n) {
    long int p = 1;
    if (n <= 1) {
        return 1;
    } else {
        return factorial(n - 1) * n;
    }
}

int prime(int n) {
    for (int i = 2; i < sqrt(n); ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return n;
}

int pointer() {
    int V;
    int *Pt1;
    int **Pt2;
    int ***Pt3;
    int ****Pt4;
    V = 100;

    /* 获取 V 的地址 */
    Pt1 = &V;

    /* 使用运算符 & 获取 Pt1 的地址 */
    Pt2 = &Pt1;
    Pt3 = &Pt2;
    Pt4 = &Pt3;

    /* 使用 pptr 获取值 */
    printf("var = %d\n", V);
    printf("Pt1 = %p\n", Pt1);
    printf("*Pt1 = %d\n", *Pt1);
    printf("Pt2 = %p\n", Pt2);
    printf("**Pt2 = %d\n", **Pt2);
    printf("&Pt2 = %d\n", &Pt2);

    return 0;
}