#include <iostream>
#include "binary.h"
#include <algorithm>
#include <math.h>
#include<assert.h>

binaryheap::binaryheap() // constructor copia
{
	size=0;
	cap_max= size + delta_cap;
	data= new int[cap_max];
}

binaryheap::binaryheap(const binaryheap & b)// constructor copia
{
	size=b.size;
	cap_max=b.cap_max;
	data= new int[cap_max];
	
	for(int i=0; i<size;i++)
		data[i]=b.data[i];
}

binaryheap::~binaryheap()
{
	delete []data;
}

void binaryheap::reserve(int p_cap)
{
	assert(p_cap>size); //si es falso, termina el programa y da error en la linea
	int *old_data=data;
	cap_max=p_cap;
	data = new int[cap_max];
	for(int i=0; i<size;i++)
		data[i]=old_data[i];
}

void binaryheap::swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void binaryheap::up_it(int i)
{

     while (data[i] > data [((i-1)/2)]) 
	{ 
		swap(data[i], data [((i-1)/2)]); 
		i=((i-1)/2); 
	} 
}

void binaryheap::dow(int i)
{
	while(2*i+1<size)
	{
		if(2*i+1<size)
		{
			swap(data[i],data[2*i+1]);
			i=2*i+1;
		}
		else if(2*i+2<size)
		{
			swap(data[i],data[2*i+2]);
			i=2*i+2;
		}
	}
}

void binaryheap:: push(const int & e) //insertar elementos
{
	
	data[size]=e;
	up_it(size++);
	
}

void binaryheap:: delete_max() //elilinar elementos
{
	swap(data[0],data[--size]);
	dow(0);
}

int binaryheap::max()
{
	int max=10e-9;
	for(int i=0;i<=size;i++)
	{
		data[i]>max;
		max=data[i];
	}
}

bool binaryheap:: test_max_heap(int size)
{
	int m= 10e6;
	binaryheap data;
	int *A=new int[size];
	for(int i=0;i<size;i++)
	{	
		A[i]=rand()% m;
		data.push(A[i]);
	}
	std::sort(A,A+size);
	for(int i=size-1;i>=0;i--)
	{
		if(A[i]!=data.max())
		{
			return false;
			data.delete_max();
		}
	}	
	delete[]A;
	return true;
}

int & binaryheap::operator[](int i)
{
	return data[i];
}

	
int binaryheap::getMin()
{
	return data[0];
} 

int main()
{
	binaryheap h;
	std::cout<< " Binary Heap "<<std::endl;
	//int data[]={50,45,42,32,25,39,31,24,20,21,15,35,28};
	h.push(1);
	h.push(2);
	h.push(3);
	h.push(5);
	h.push(12);
	h.push(13);
	h.push(15);

	std::cout <<"El numero en la posicion [0] es: "<< h.getMin() << "\n";

	return 0;
}

