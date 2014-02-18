//
//  main.cpp
//  MinMaxAlgorithm
//
//  Created by Hamad Almarri on 12/14/2013.
//

#include <iostream>
//#include <time.h>
//#include <stdlib.h>
#include "FourInRowPuzzle.h"
#include "MinMaxAlgorithm.h"
#include "Graph.h"
#include "GraphNode.h"
#include "MinMaxAlgorithm.h"

using namespace std;


void TestSizes() {
	cout << "sizeof(PuzzleHole): " << sizeof(PuzzleHole) << " Bytes" << endl;
	cout << "sizeof(FourInRowPuzzle): " << sizeof(FourInRowPuzzle) << " Bytes" << endl;
	cout << "sizeof(MinMaxAlgorithm): " << sizeof(MinMaxAlgorithm) << " Bytes" << endl;
	cout << "sizeof(GraphNode<u_int8_t>): " << sizeof(GraphNode<u_int8_t>) << " Bytes" << endl;
	cout << "sizeof(Graph<u_int8_t>): " << sizeof(Graph<u_int8_t>) << " Bytes" << endl;
}


#define PLAYER1 PUZZLE_HOLE_COLORS::RED
#define PLAYER2 PUZZLE_HOLE_COLORS::BLACK
void TestFourInRowPuzzle() {
	
	FourInRowPuzzle p;
	MinMaxAlgorithm minMaxAlgorithm;
//	srand((unsigned int)time(NULL));
	bool player = false;
	
	cout << "0: you play first, 1 computer play first: ";
	cin >> player;
	
	PUZZLE_HOLE_COLORS::PUZZLE_HOLE_COLORS currentColor;
	unsigned short column = 0;
	unsigned short maxDepth;
	
	cout << "enter max depth: ";
	cin >> maxDepth;
	
	minMaxAlgorithm.SetMaxDepth(maxDepth);
	
	cout << p.ToString() << endl;
	
	while (!p.IsFull() && !p.IsDone()) {
		try {
			if (player) {
				currentColor = PLAYER1;
				minMaxAlgorithm.SetPuzzle(p);
				cout << "computer is thinking ...\n";
				column = minMaxAlgorithm.GetNextPlay();
				cout << "computer played: " << column << endl;
				cout << "Created Nodes: " << minMaxAlgorithm.GetGraphNodesCount() << endl;
			} else {
				currentColor = PLAYER2;
				cout << "your turn, type a column number: ";
				cin >> column;
			}
			
			
			p.AddToken(currentColor, column);
			
			cout << p.ToString() << endl;
			player = !player;
		} catch (FullColumn e) {
			cout << "column is full!\n";
		} catch (...) {
			cout << "unknown error\n";
		}
	}
	
	
	cout << p.ToString() << endl;
	
	if (p.IsDone()) {
		if (p.GetWinner() == PUZZLE_HOLE_COLORS::RED)
			cout << "Red won!\n";
		else if (p.GetWinner() == PUZZLE_HOLE_COLORS::BLACK)
			cout << "Black won!\n";
	} else {
		cout << "No body won!\n";
	}
	
	cout << endl;
}



int main() {

	TestFourInRowPuzzle();
//	TestSizes();
	
    return 0;
}

