#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
// Class Linked List

template <class T>
class linked_list;

template <class T>
class node
{
	private:
		T dato;
		node<T> * p_next;
	public:
		node(const T & d, node<T> * n = NULL):
			dato(d), p_next(n) {}
		
		~node() = default;
		
		friend class linked_list<T>;
};

// Class Iterator

template <class T>
class linked_list
{
	public:
		class iterator
		{
			private:
				node<T> * p_current;
			
			public:
				iterator(node<T> * n = NULL): p_current(n) {}
				~iterator() = default;
				
				iterator & operator ++ ()
				{
					p_current = p_current->p_next;
					return *this;
				}
				
				T & operator * ()
				{
					return p_current->dato;
				}
				
				bool operator != (const iterator & it)
				{
					return p_current != it.p_current;
				}		
		};

	private:
		node<T> * p_head;
	public:
		linked_list(): p_head(NULL)  {} //Constructor
		
		~linked_list() // Destructor
		{
					
			node<T> * aux;
			
			while (p_head) 
			{
				aux = p_head;
				p_head = p_head->p_next;
				delete aux;
			}
			/*
			while(p_head)
			{
				pop_front;
			}
			*/
		}
		
		// reverse without create new nodes

		//Insertar al Frente
		void insert_front(const T & d)
		{
			p_head = new node<T>(d, p_head);
		}
		
		// Insertar al Final
		void insert_back(const T & d)
		{
			node<T> ** p_last = &p_head;
			while(*p_last)
				p_last = &(*p_last)->p_next;
			
			*p_last = new node<T>(d);
		}
		
		// Eliminar al Frente
		void pop_front()
		{
			
			node<T> *temp = p_head;
		    p_head = p_head->p_next;
		    delete temp;
		    
		}
		
		// Eliminiar Al final
		void pop_back()
		{
		    node<T> * temp = p_head;
			node<T> * last_post = NULL;
			
			while (temp->p_next != NULL) 
			{
				last_post = temp;
				temp = temp->p_next;
			}
				
			last_post->p_next = NULL;
			delete temp;
			
			last_post = NULL;
			delete last_post;
		}
  
		const iterator begin()
		{
			return {p_head};
		}
		
		const iterator end()
		{
			return {NULL};
		}
};
#endif //
