#include <iostream>

template <bool flag = false>
void func();

template<>
void func<true>() {
    std::cout << "Its true" << std::endl;
}

template<>
void func<false>() {
    std::cout << "Its false" << std::endl;
}

int main() {
    std::cout << "Hello World" << std::endl;
    func<true>();
    func<false>();
    func<>();
    return 0;
}
