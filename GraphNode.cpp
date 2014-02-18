//
//  GraphNode.cpp
//  8-Puzzle
//
//  Created by Hamad Almarri on 11/2/2013.
//

#ifndef ____Puzzle__GraphNode__cpp
#define ____Puzzle__GraphNode__cpp
#include "GraphNode.h"

template <typename T>
GraphNode<T>::GraphNode() {
	
	// allocate memory for edges vector
	this->Edges = new vector< GraphNode<T>* >;
	
	
	// make the token position = 7 it's out of boundry
	// means no move yet
	this->tokenPosition = 7;
	
	
	// initialize depth, heuristic, and way to solution
	this->depth = 0;
	
	
	// set min max value to be not assigned value
	this->minMaxValue = -32768;
	
//	this->wayToSolution = false;
}



template <typename T>
GraphNode<T>::~GraphNode() {
	
	// delete edges data
	delete this->Edges;
}



//template <typename T>
//GraphNode<T>* GraphNode<T>::GetWayToSolutionChild() {
//	
//	// get the way to solution child
//	for (typename vector< GraphNode<T>* >::iterator it = Edges->begin(); it != Edges->end(); it++) {
//		if ((*it)->wayToSolution)
//			return *it;
//	}
//	return NULL;
//}


//template <typename T>
//void GraphNode<T>::operator=(const GraphNode<T> &graphNodeB) {
//	this->GraphNodeData = graphNodeB.GraphNodeData;
//	this->depth = graphNodeB.depth;
//	this->heuristic = graphNodeB.heuristic;
//	this->wayToSolution = graphNodeB.wayToSolution;
//}
//
//
//template <typename T>
//bool GraphNode<T>::operator<(const GraphNode<T> &graphNodeB) {
//	return (this->depth + this->heuristic) < (graphNodeB.depth + graphNodeB.heuristic);
//}
//
//
//
//template <typename T>
//bool GraphNode<T>::operator>(const GraphNode<T> &graphNodeB) {
//	return (this->depth + this->heuristic) > (graphNodeB.depth + graphNodeB.heuristic);
//}








#endif