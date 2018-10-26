#ifndef BINARY_H
#define BINARY_H

#include<iostream>
#include<math>
#include<vector>
#include<algorithm>
class binary
{
private:
	vector<int> data;
	int size;
	//int cap_max;

public:
	binary(int size);
	binary(const binary & b); //construcctor copia
	virtual ~binary(); //destructor .-> libera la memoria
	void push(const int & b); // insertar elementos
	void delete_max(const int & b);
  	void up(int i);
  	void dow(int i);
  	bool text_max_heap(int size);
};
binary(const binary & b) // constructor copia
{
	
}

void push(int b) //insertar elementos
{
	data.push_back(b);
	up(size++)
}
void push(int b) //elilinar elementos
{
	swap(data[0],data[--size])
	dow(0);
}
void up (int i)
{
	while (data[i] > data [((i-1)/2)])
	{
		swap(data[i], data [((i-1)/2)]);
		i=((i-1)/2);
	}
}

void dow (int i)
{
	while(2*i+1<size)
	{
		if(2*i+1>=size)
		{
			swap(data[i],swap[2*i+1])
			i=2*i+1
		}
		else if(2*i+2>=size)
		{
			swap(data[i],swap[2*i+2])
			i=2*i+2
		}
	}
}
bool text_max_heap(int size)
{
	int m=  10e9;
	binary data;
	int *A=new int[size];
	for(int i=0;i<size;i++)
	{	
		A[i]=rand()% m;
		data.push(A[i]);
		
	}
	sort(A,A+size);
	for(int i=size-1,i>=0;i--)
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
#endif //
