#include <iostream>

#include "BFloat16.h"
#include "BFloat16-inl.h"


int main() {
    c10::BFloat16 a(3.14f);
    // c10::BFloat16 b(3.14f);
    float b = 2.0;

    c10::BFloat16 c = a + b;
    c10::BFloat16 d = a - b;
    c10::BFloat16 e = a * b;
    c10::BFloat16 f = a / b;

    std::cout << "a.x = " << a.x << "; a = " << a << "\n";
    std::cout << "b.x = " << b << "; b = " << b << "\n";
    std::cout << "c.x = " << c.x << "; c = " << c << "\n";
    std::cout << "d.x = " << d.x << "; d = " << d << "\n";
    std::cout << "e.x = " << e.x << "; e = " << e << "\n";
    std::cout << "f.x = " << f.x << "; f = " << f << "\n";

    return 0;
}
