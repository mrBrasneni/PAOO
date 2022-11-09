#include <iostream>
#include "MyFigure.hpp"

MyFigure::MyFigure()
:color(MyColor::colorTransfer()), count(0), area(0)
{}

MyFigure::MyFigure(int countOfFigure, double areaOfFigure)
:color(MyColor::colorTransfer()), count(countOfFigure), area(areaOfFigure) 
{}

MyFigure& MyFigure::operator=(const MyFigure& rhs){
    //color = rhs.color; assignment op este private
    area = rhs.area;
    return *this;
}

MyFigure& MyFigure::transfer() {
    static MyFigure fig;
    return fig;
}

void MyFigure::print() {
    color.print();
    std::cout << count << " " << area << "\n";
}