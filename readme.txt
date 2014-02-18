This project is a four in row game that has been written in C++
The algorithm that I used at beginning is min-max algorithm after that I have added alpha-beta functionality to reduce the number of node generated.

In this project the use able to set the depth since the algorithm uses depth-first search.

choosing depth to be 7 is the best in terms of memory performance, which consume around 25M.






/////////////////////
program running
/////////////////////


0: you play first, 1 computer play first: 0
enter max depth: 7
|               |
|               |
|               |
|               |
|               |
|               |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 3
|               |
|               |
|               |
|               |
|               |
|       X       |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 3
Created Nodes: 269273
|               |
|               |
|               |
|               |
|       O       |
|       X       |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 2
|               |
|               |
|               |
|               |
|       O       |
|     X X       |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 4
Created Nodes: 306588
|               |
|               |
|               |
|               |
|       O       |
|     X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 3
|               |
|               |
|               |
|       X       |
|       O       |
|     X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 3
Created Nodes: 399407
|               |
|               |
|       O       |
|       X       |
|       O       |
|     X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 1
|               |
|               |
|       O       |
|       X       |
|       O       |
|   X X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 0
Created Nodes: 555803
|               |
|               |
|       O       |
|       X       |
|       O       |
| O X X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 1
|               |
|               |
|       O       |
|       X       |
|   X   O       |
| O X X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 3
Created Nodes: 358062
|               |
|       O       |
|       O       |
|       X       |
|   X   O       |
| O X X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 3
|       X       |
|       O       |
|       O       |
|       X       |
|   X   O       |
| O X X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 1
Created Nodes: 183494
|       X       |
|       O       |
|       O       |
|   O   X       |
|   X   O       |
| O X X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 0
|       X       |
|       O       |
|       O       |
|   O   X       |
| X X   O       |
| O X X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 1
Created Nodes: 156003
|       X       |
|       O       |
|   O   O       |
|   O   X       |
| X X   O       |
| O X X X O     |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 6
|       X       |
|       O       |
|   O   O       |
|   O   X       |
| X X   O       |
| O X X X O   X |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 0
Created Nodes: 146830
|       X       |
|       O       |
|   O   O       |
| O O   X       |
| X X   O       |
| O X X X O   X |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 5
|       X       |
|       O       |
|   O   O       |
| O O   X       |
| X X   O       |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 0
Created Nodes: 150281
|       X       |
|       O       |
| O O   O       |
| O O   X       |
| X X   O       |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 0
|       X       |
| X     O       |
| O O   O       |
| O O   X       |
| X X   O       |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 0
Created Nodes: 133756
| O     X       |
| X     O       |
| O O   O       |
| O O   X       |
| X X   O       |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 6
| O     X       |
| X     O       |
| O O   O       |
| O O   X       |
| X X   O     X |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 1
Created Nodes: 41517
| O     X       |
| X O   O       |
| O O   O       |
| O O   X       |
| X X   O     X |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 1
| O X   X       |
| X O   O       |
| O O   O       |
| O O   X       |
| X X   O     X |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 2
Created Nodes: 10302
| O X   X       |
| X O   O       |
| O O   O       |
| O O   X       |
| X X O O     X |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

your turn, type a column number: 2
| O X   X       |
| X O   O       |
| O O   O       |
| O O X X       |
| X X O O     X |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

computer is thinking ...
computer played: 2
Created Nodes: 5399
| O X   X       |
| X O   O       |
| O O O O       |
| O O X X       |
| X X O O     X |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

| O X   X       |
| X O   O       |
| O O O O       |
| O O X X       |
| X X O O     X |
| O X X X O X X |
  - - - - - - -
  0 1 2 3 4 5 6

Red won!
