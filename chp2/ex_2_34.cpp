#include <iostream>

int main(){
    int i = 0, &r = i;
    auto a = r;
    a = 42;
    std::cout<<"a: "<<a<<std::endl;

    const int ci = i, &cr = ci;
    auto b = ci;
    b = 42;
    std::cout<<"b: "<<b<<std::endl;
    auto c = cr;
    c = 42;
    std::cout << "c: " << c << std::endl;
    auto d = &i;
    d = 0;
    std::cout << "d: " << d << std::endl;
    auto e = &ci;
    e = nullptr;
    std::cout<<"e: "<<e<<std::endl;
    auto &g = ci;
    //g = 42;
    std::cout << "g: " << g << std::endl;

}
