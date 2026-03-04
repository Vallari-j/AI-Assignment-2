# Uninformed Search Algorithms: BFS and DFS using Tic Tac Toe

Uninformed search algorithms explore the search space without using additional knowledge about the goal state. They only use the structure of the problem to explore possible states. Two common uninformed search strategies are Breadth First Search (BFS) and Depth First Search (DFS).

In games like Tic Tac Toe, the search space consists of all possible board configurations that can occur from the starting position.

---

## Breadth First Search (BFS)

Breadth First Search explores the game tree level by level. It first examines all possible moves from the initial board state before exploring deeper moves.

In Tic Tac Toe, BFS works by:
1. Starting from the initial empty board.
2. Generating all possible moves for the first player.
3. Exploring all resulting board states before moving to deeper levels of the game tree.

### Characteristics
- Uses a **Queue (FIFO)** data structure.
- Explores nodes **level by level**.
- **Guaranteed to find the shortest solution path**.
- Requires **large memory** because it stores many nodes at each level.

---

## Depth First Search (DFS)

Depth First Search explores one branch of the game tree as deeply as possible before backtracking to explore other branches.

In Tic Tac Toe, DFS works by:
1. Starting from the empty board.
2. Choosing one possible move.
3. Continuing to explore moves from that state until the game ends.
4. Backtracking to explore other possible moves.

### Characteristics
- Uses a **Stack or Recursion**.
- Explores **one branch deeply before others**.
- Uses **less memory than BFS**.
- May explore unnecessary deep branches before finding a solution.

---

## BFS vs DFS in Tic Tac Toe

| Feature | BFS | DFS |
|-------|------|------|
| Data Structure | Queue | Stack / Recursion |
| Search Style | Level-by-level | Deep exploration |
| Memory Usage | High | Low |
| Optimal Solution | Yes | Not always |
| Speed | Slower in large trees | Faster but may explore wrong paths |

---

## Performance in Tic Tac Toe

In Tic Tac Toe, BFS systematically explores all possible board states level by level, which guarantees finding the optimal solution but consumes more memory. DFS explores one possible sequence of moves until the game ends, which requires less memory but may explore many unnecessary paths before finding the best move.

Therefore, BFS is more reliable for finding optimal strategies, while DFS is more memory efficient but less predictable in performance.
