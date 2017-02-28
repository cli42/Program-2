#if !defined QUEUEDEQUE_H
#define QUEUEDEQUE_H

#include <iostream>
#include "DequeArray.h"
using namespace std;

template < class T >
class QueueDeque
{
	private:
		DequeArray<T>* qd;
		
	public:
		QueueDeque();
		~QueueDeque();
		bool isEmpty();
		int size();
		void dequeueAll();
		void enqueue(T* item);
		T* dequeue();
		T* peek();
};

template < class T >
QueueDeque<T>::QueueDeque()
{
	qd = new DequeArray<T>;
}

template < class T >
QueueDeque<T>::~QueueDeque()
{
	delete qd;
}

template < class T >
bool QueueDeque<T>::isEmpty()
{
	return qd->isEmpty();
}

template < class T >
int QueueDeque<T>::size()
{
	return qd->size();
}

template < class T >
void QueueDeque<T>::dequeueAll()
{
	qd->dequeueAll();
}

template < class T >
void QueueDeque<T>::enqueue(T* item)
{
	qd->enqueue(item);
}

template < class T >
T* QueueDeque<T>::dequeue()
{
	return qd->dequeueDeque();
}

template < class T >
T* QueueDeque<T>::peek()
{
	return qd->peekDeque();
}

#endif