#ifndef SQUARE_H
#define SQUARE_H

#include<iostream>
#include"figure.h"

using namespace std;


class square: public figure
{
private:
    points slados;

public:
  square(const string &  _color="",points _slados =0, int _tamlado=0): figure(_color,_tamlado)
  {
  slados = _slados;
  //lados[0] = origen;
  
   }
    ~square()
	{
    //	cout << "delete square" << endl;
	}
void draw(QPainter* painter)
{
    painter->drawRect(slados.getx(), slados.getx(), tamlado, tamlado);
}
};

#endif 
