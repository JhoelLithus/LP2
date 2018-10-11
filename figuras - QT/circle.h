#ifndef CIRCLE_H
#define CIRCLE_H

#include<iostream>
#include"figure.h"

using namespace std;

class circle: public figure
{
private:
    int radio;
    points center;

public:
circle(const string &  _color="", points _center={0,0},int _radio=1): figure(_color), center(_center),radio(_radio){}
~circle()
    {
        //cout << "delete circle" << endl;
    }
void draw(QPainter* painter)
{
   painter->drawEllipse({center.getx(), center.gety()},radio, radio);
}
};

#endif 
