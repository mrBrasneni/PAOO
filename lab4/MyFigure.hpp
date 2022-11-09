#include "MyColor.hpp"

class MyFigure{
    public:
        MyFigure();
        MyFigure(int countOfFigure, double areaOfFigure);
        MyFigure& operator=(const MyFigure& rhs);
        static MyFigure& transfer();
        void print();
    private:
        MyColor color;
        const int count;
        double area;
};