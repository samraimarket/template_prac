#include <iostream>

// You can define falag == false is default.
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
    
    // You can confirm each output by these call.
    func<true>();
    func<false>();

    // You can confirm the defualt is false.
    func<>();
    return 0;
}
