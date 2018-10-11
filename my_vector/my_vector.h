#ifndef MY_VECTOR_H
#define MY_VECTOR_H

template <class T>

class my_vector
{
private:
	T *p_data;
	int m_size;
	int max_cap;
	static const int delta_cap=10;
	
public:
	my_vector(int p_size=0); //constructor
	my_vector(const my_vector & v); //construcctor copia
	virtual ~my_vector(); //destructor .-> libera la memoria
	void push_back(const T & e); // insertar elementos
	void reserve(int p_cap); //cambia la capacidad maxima del array
	void resize(int p_size); //cambia el tamaño del array
	T & operator[](int i);
};
#include "my_vector.inl"

#endif //MY_VECTOR.H
