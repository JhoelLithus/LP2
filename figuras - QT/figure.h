#ifndef FIGURE_H
#define FIGURE_H

#include<iostream>
#include<stdlib.h>
#include <QPainter>

using namespace std;

class points
{
protected:
    int x;
    int y;

public:
    points(const int & _x=0, const int & _y=0): x(_x), y(_y) {}
    virtual ~points()=default;
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    void set_xy(int _x, int _y);

    friend ostream & operator <<(ostream & os, const points & p)
    {
        cout<< p.x << ","<<p.y<< endl;
    }
    
};

class figure
{
protected:
    string color;
    int tamlado;

public:
    
    figure(const string _color="", const int _tamlado=0):color(_color),tamlado(_tamlado) {}//constructor
    virtual ~figure()=default;
    virtual void draw(QPainter * painter)=0;
   // virtual void print()
    //	{
        //	cout << "color: " << color<<"tamaño del lado"<<tamlado<< endl;
    //	}
 
};
#endif 
