/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: ftha4681
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_
#include "ArrayNode.cpp"

template <class Type>
class CTECList
{
private:
	ArrayNode<Type>*head;
	ArrayNode<Type>*end;
	int size;
	void calcuateSize();
public:
	CTECList();
	virtual ~CTECList();
	Type removeFromFront();
	Type removeFromEnd();
	void addToFront(const Type & value);
	void addAtIndex(int index, const Type & value);
	Type getFront();
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
	void addToEnd(const Type& value);
	Type getFromIndex(int index);

};


#endif /* MODEL_CTECLIST_H_ */
4
