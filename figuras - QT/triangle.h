#ifndef TRIANGLE_H
#define TRIANGLE_H

#include<iostream>
#include"figure.h"
using namespace std;

class triangle: public figure
{
private:
    //points tlados[3];
   // int lados;
    int heigh;
    int post_x;
    int post_y;

public:
    /*triangle(const string &  _color="", const points * _tlados={}): figure(_color)
    {
        if(_tlados)
        {
            tlados[0] = _tlados[0];
            tlados[1] = _tlados[1];
            tlados[2] = _tlados[2];
        }

   }*/

    triangle(const string &  _color="",int _heigh=1, int _post_x=0, int _post_y=0): figure(_color), post_x(_post_x), post_y(_post_x) {}

      ~triangle()
	{
        //cout << "delete triangle" << endl;
	}

void draw(QPainter* painter)
{
    //QPoint p[3] = {{tlados[0].getx(),tlados[0].gety() }, {tlados[1].getx(),tlados[1].gety() }, {tlados[2].getx(),tlados[2].gety()}};
    //painter->drawConvexPolygon(p,3);

    painter->drawLine(post_x,post_y,post_x-heigh/2,post_y+heigh);//primera linea
    painter->drawLine(post_x+heigh/2,post_y+heigh,post_x,post_y);//segunda linea
    painter->drawLine(post_x-heigh/2,post_y+heigh,post_x+heigh/2,post_y+heigh);//linea horizontal

    cout <<"La altura del triangulo es: "<<heigh<<" de coordenadas "<< post_x<<" , "<<post_y<<endl;
}
};

#endif 
