#include <iostream>
#include <cstdio>

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;

    std::cin >> a >> b >> c >> d >> e;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    printf("%.3f\n", d);//c++ = cout.precision(n);
    printf("%.9lf", e);
}