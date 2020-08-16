#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Point2D.hpp"
using namespace std;

class Rectangle
{
    public: 

        Rectangle(Point2D startingPoint, float width, float length);
        ~Rectangle();
        Point2D GetBottomLeftCorner();
        Point2D GetBottomRightCorner();
    
    private:  

        Point2D bottomLeftCorner;
        Point2D bottomRightCorner;
};

#endif