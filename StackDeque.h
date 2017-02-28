#if !defined STACKDEQUE_H
#define STACKDEQUE_H

#include <iostream>
#include "DequeArray.h"
using namespace std;

template < class T >
class StackDeque
{
	private:
		DequeArray<T>* sd;
		
	public:
		StackDeque();
		~StackDeque();
		bool isEmpty();
		int size();
		void dequeueAll();
		void push(T* item);
		T* pop();
		T* peek();
};

template < class T >
StackDeque<T>::StackDeque()
{
	sd = new DequeArray<T>;
}

template < class T >
StackDeque<T>::~StackDeque()
{
	delete sd;
}

template < class T >
bool StackDeque<T>::isEmpty()
{
	return sd->isEmpty();
}

template < class T >
int StackDeque<T>::size()
{
	return sd->size();
}

template < class T >
void StackDeque<T>::dequeueAll()
{
	sd->dequeueAll();
}

template < class T >
void StackDeque<T>::push(T* item)
{
	sd->enqueueDeque(item);
}

template < class T >
T* StackDeque<T>::pop()
{
	return sd->dequeue();
}

template < class T >
T* StackDeque<T>::peek()
{
	return sd->peek();
}

#endif