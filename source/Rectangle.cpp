#include "Rectangle.hpp"
using namespace std;

Rectangle::Rectangle(Point2D startingPoint, float width, float length)
{
    bottomLeftCorner = Point2D(startingPoint);
    bottomRightCorner = Point2D(startingPoint.getX() + width, startingPoint.getY());
    topLeftCorner = Point2D(startingPoint.getX(), startingPoint.getY() + length);
    topRightCorner = Point2D(startingPoint.getX() + width, startingPoint.getY() + length);
}

Rectangle::Rectangle(const Rectangle & r)
{
    bottomLeftCorner = r.bottomLeftCorner;
    bottomRightCorner = r.bottomRightCorner;
    topLeftCorner = r.topLeftCorner;
    topRightCorner = r.topRightCorner;
}

Rectangle::~Rectangle()
{
}

Point2D Rectangle::GetBottomLeftCorner()
{
    return bottomLeftCorner;
}

Point2D Rectangle::GetBottomRightCorner()
{
    return bottomRightCorner;
}

Point2D Rectangle::GetTopLeftCorner()
{
    return topLeftCorner;
}

Point2D Rectangle::GetTopRightCorner()
{
    return topRightCorner;
}