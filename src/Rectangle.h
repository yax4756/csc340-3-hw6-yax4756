#pragma once

#include "Point2D.h"
#include "CustomException.h"

template <class T>
class Rectangle:public Point2D<T>{
protected:
    T w=0,h=0;
public:
    Rectangle(){Point2D<T>::x=0;Point2D<T>::y=0;}
    Rectangle(T x,T y,T w, T h){h=h;w=w;Point2D<T>::x=x;Point2D<T>::y=y;if(w<0||h<0)throw CustomException(33);}

    T getWidth()const;
    T getHeight()const;
    void setWidth(T w);
    void setHeight(T h);

    float area() const;

    float circumference() const;
};
template <class T>
T Rectangle<T>::getWidth()const  {
    return w;
}
template <class T>
T Rectangle<T>::getHeight() const {
    return h;
}
template <class T>
void Rectangle<T>::setWidth(T w) {
    this->w=w;
    if(w<0)throw CustomException(33);
}
template <class T>
void Rectangle<T>::setHeight(T h) {
    this->h=h;
}
template <class T>
float Rectangle<T>::area() const {
    return float(Rectangle::getWidth()*Rectangle::getHeight());
}
template <class T>
float Rectangle<T>::circumference() const {
    return float(2*(Rectangle::getHeight()+Rectangle::getWidth()));
}
