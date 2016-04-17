#pragma once

#include "Point2D.h"
#include "Rectangle.h"

template <class T>
class Square: public Rectangle<T>{
protected:
    T side;
public:
    //Square():side(0),x(0),y(0),Rectangle::h(side),Rectangle::w(side){}
    //Square(T x,T y,T side):x(x),y(y),side(side),Rectangle::h(side),Rectangle::w(side){}
    Square(){
        this->x=0;
        this->y=0;
        this->side=0;
        Rectangle<T>::w=side;
        Rectangle<T>::h=Rectangle<T>::w;
        if(Rectangle<T>::w<0|Rectangle<T>::h<0)throw CustomException(33);
    }
    Square(T x,T y, T side){
        x=x;
        y=y;
        side=side;
        Rectangle<T>::h=side;
        Rectangle<T>::w=Rectangle<T>::h;
        if(Rectangle<T>::w<0|Rectangle<T>::h<0)throw CustomException(33);
    }
};