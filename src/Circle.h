#pragma once
#define _USE_MATH_DEFINES

#include "Point2D.h"
#include "CustomException.h"
#include "math.h"


template<class T>
class Circle : public Point2D<T>{
protected:
        T r;
    public:
        Circle(){ Point2D<T>::x=0;Point2D<T>::y=0;r=0;}
        Circle(T x, T y, T r){Point2D<T>::x=x;Point2D<T>::y=y;r=r;}

        float getRadius()const;
        void setRadius(T r);

    float area() const;

    float circumference() const;
};
template<class T>
    float Circle<T>::area() const{
        return (float) (Circle::getRadius() * Circle::getRadius() * M_PI);
    }
template <class T>
    float Circle<T>::circumference() const {
    return (float)(2*Circle::getRadius()*M_PI);
}
template <class T>
    void Circle<T>::setRadius(T r){
    Circle::r=r;
}
template <class T>
float Circle<T>::getRadius() const {
    return r;
}
