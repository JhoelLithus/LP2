#include<assert.h>
#include<cstring>

template<class T>
my_vector<T>::my_vector(int p_size): m_size(p_size) //constructor
{
	max_cap= m_size+delta_cap;
	T *p_data = new  T[max_cap];
}

template<class T>
my_vector<T>::my_vector(const my_vector <T> & v) // constructor copia
{
	m_size= v.msize;
	max_cap= v.max_cap;
	p_data= new T [max_cap];
	
	for(int i=0; i<m_size;i++)
		p_data[i]=v.p_data[i];
}

template<class T>
my_vector<T>::~my_vector() //destructor
{
	delete []p_data;
}

template<class T>
void my_vector<T>::reserve(int p_cap)
{
	assert(p_cap>m_size); //si es falso, termina el programa y da error en la linea
	T* old_data=p_data;
	max_cap=p_cap;
	p_data = new T[max_cap];
	for(int i=0; i<m_size;i++)
		p_data[i]=old_data[i];
}

template<class T>
void my_vector<T>::push_back(const T & e) //insertar elementos
{
	if(m_size+1>max_cap)
		{
		my_vector<T>::reserve(max_cap+delta_cap);
		}
	p_data[m_size++]=e;
}

template<class T>
T & my_vector<T>::operator[](int i)
{
	return p_data[i];
}

template<class T>
void my_vector<T>::resize(int p_size)
{

	if(p_size<m_size)
	{
		return p_data[p_size];
	}
	throw 10;
}
