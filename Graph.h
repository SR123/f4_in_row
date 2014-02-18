//
//  Graph.h
//  8-Puzzle
//
//  Created by Hamad Almarri on 11/2/2013.
//

#ifndef ____Puzzle__Graph__
#define ____Puzzle__Graph__

#include <iostream>
#include "GraphNode.h"
#include <vector>


template <typename T>
class Graph {
public:
	
	// constructor
	Graph();
	
	// copy constructor
	Graph(const Graph &graphB);
	
	~Graph();
	
	
	// Add
	// Parameters:
	//				T value
	// returns:
	//				the new GraphNode that has bean added to the list
	void Add(GraphNode<T> *aGraphNode);
	
	// AddEdge
	// adding edge from GraphNode A to GraphNode B
	void AddEdge(GraphNode<T> *A, GraphNode<T> *B);
	
	
	// return the first graph node in Graph
	GraphNode<T>* GetFirstGraphNode();
	
	// get how many graph nodes have been created
	unsigned long long int GetGraphNodesCount() const;
	
private:
	vector< GraphNode<T>* > GraphNodeList;
	
	// to count how many graph nodes have been created
	unsigned long long int graphNodesCount;
};


#include "Graph.cpp"
#endif /* defined(____Puzzle__Graph__) */
