//
//  Graph.cpp
//  8-Puzzle
//
//  Created by Hamad Almarri on 11/2/2013.
//

#ifndef ____Puzzle__Graph__cpp
#define ____Puzzle__Graph__cpp
#include "Graph.h"


template <typename T>
Graph<T>::Graph() {

	// zero up the counter
	this->graphNodesCount = 0;
}



template <typename T>
Graph<T>::Graph(const Graph &graphB) {
	
}



template <typename T>
Graph<T>::~Graph() {
	
	// delete all graph nodes in the graph
	for (typename vector<GraphNode<T>*>::iterator it = GraphNodeList.begin(); it != GraphNodeList.end(); it++)
		delete (*it);
	
	this->GraphNodeList.clear();
}



template <typename T>
void Graph<T>::Add(GraphNode<T> *aGraphNode) {
	
	// allocate new data fro new graph node
//	GraphNode<T> *newGraphNode = new GraphNode<T>;
	
	// set the graph node data
//	newGraphNode->GraphNodeData = GraphNodeData;
	
	// set the parent to NULL
	aGraphNode->parent = NULL;
	
	// push the new graph node to the graph node list
	this->GraphNodeList.push_back(aGraphNode);
	
	// increment graph nodes count
	this->graphNodesCount++;
	
	// return a pointer of new graph node
//	return aGraphNode;
}



template <typename T>
void Graph<T>::AddEdge(GraphNode<T> *A, GraphNode<T> *B) {
	// set child graph node's parent to current graph node
	B->parent = A;
	
	// set child graph node's depth
	B->depth = A->depth + 1;
	
	// add B as successor of A
	A->Edges->push_back(B);
}



template <typename T>
GraphNode<T>* Graph<T>::GetFirstGraphNode() {
	return this->GraphNodeList.front();
}



template <typename T>
unsigned long long int Graph<T>::GetGraphNodesCount() const {
	return this->graphNodesCount;
}














#endif