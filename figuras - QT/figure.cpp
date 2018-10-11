#include<iostream>
#include"figure.h"
#include"circle.h"
#include"square.h"
#include"triangle.h"

#include<vector>

int main()
{
  vector <figure *> vf;
	points *spuntos = new points[4];
	points *tpuntos = new points[3];


	vf.push_back(new circle("rojo",points (4,6)));
	vf.push_back(new square("azul",5, spuntos));
	vf.push_back(new triangle("celeste",8, tpuntos));
	
	
	for(figure * f: vf)
		f->draw();
	
	for(figure * f: vf)
		delete f;

	return 0;
};
