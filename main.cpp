#include <iostream>

#include "BFloat16.h"
#include "BFloat16-inl.h"


int main() {
    c10::BFloat16 a(3.14f);
    // c10::BFloat16 b(3.14f);
    float b = 2.0;

    float f1 = static_cast<float>(a);
    float f2 = static_cast<float>(b);

    c10::BFloat16 c = a + b;
    c10::BFloat16 d = a - b;
    c10::BFloat16 e = a * b;
    c10::BFloat16 f = a / b;

    std::cout << "a = " << a.x << ", value = " << f1 << "\n";
    std::cout << "b = " << b << ", value = " << f2 << "\n";
    std::cout << "c = " << c.x << ", value = " << c << "\n";
    std::cout << "d = " << d.x << ", value = " << d << "\n";
    std::cout << "e = " << e.x << ", value = " << e << "\n";
    std::cout << "f = " << f.x << ", value = " << f << "\n";

    return 0;
}
