//
//  GraphNode.h
//  8-Puzzle
//
//  Created by Hamad Almarri on 11/2/2013.
//

#ifndef ____Puzzle__GraphNode__
#define ____Puzzle__GraphNode__

#include <iostream>
#include <vector>


using namespace std;

template <typename T>
class GraphNode {
public:
	
	// constructor
	GraphNode();
	
	// deconstructor
	~GraphNode();
	
	
	// graph node data is the token position
	T tokenPosition;
	
	// MinMax Value
	short minMaxValue;
	
	// successor graph nodes will be in Edges vector
	vector< GraphNode<T>* > *Edges;
	
	// parent node
	GraphNode *parent;
	
	// the depth of the graph node
	u_int8_t depth;
	
	// to hold heuristic function value
//	unsigned int heuristic;
	
	// marker towards the way to solution
//	bool wayToSolution;
	
	
//	GraphNode<T>* GetWayToSolutionChild();
//	
//	void operator=(const GraphNode<T> &graphNodeB);
//	bool operator<(const GraphNode<T> &graphNodeB);
//	bool operator>(const GraphNode<T> &graphNodeB);
	
//private:
	
};

#include "GraphNode.cpp"
#endif /* defined(____Puzzle__GraphNode__) */
