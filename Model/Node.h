/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: ftha4681
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_

#include <iostream>

template <class Type>
class Node
{
public:
	Node();
	Node(const Type& value);
	Type getValue();
	void setValue(const Type& value);
	Node* getPointers();
private:
	Type value;
	Node* ptrs;
};





#endif /* MODEL_NODE_H_ */
