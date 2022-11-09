#include <iostream>
#include "MyFigure.hpp"

int main() {

    int x = 0;
    float f;
    std::cout << "f = ";
    std::cin >> f;
    std::cout << "x initializat = " << x
        << "\nf initialiazt prin citire = " << f << "\n";

    MyFigure figure1(7,8);
    figure1.print();
    MyFigure figure2 = figure1; // copy constructor
    figure2.print();
    MyFigure figure3; // no arg constructor
    figure1 = figure3; // assignment op
    figure1.print();

    return 0;
}