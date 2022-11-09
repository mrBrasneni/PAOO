#include <iostream>
#include "MyColor.hpp"

MyColor::MyColor()
:r(0), g(0), b(0)
{}

MyColor& MyColor::colorTransfer() {
    static MyColor col;
    return col;
}

void MyColor::print() {
    std::cout << "Color(R: " << r << " G: " << g << " B: " << b <<") ";
}