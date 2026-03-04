# Uninformed Search Algorithms

Uninformed search algorithms explore the search space without any additional information about the goal state. They rely only on the structure of the problem.

## Breadth First Search (BFS)

BFS explores nodes level by level. It first visits the root node, then all neighbors, and then their neighbors.

### Characteristics
- Uses Queue (FIFO)
- Complete
- Optimal for equal cost paths
- Higher memory usage

---

## Depth First Search (DFS)

DFS explores nodes as deep as possible before backtracking.

### Characteristics
- Uses Stack or Recursion
- Less memory than BFS
- Not always optimal
- May get stuck in deep paths

---

## Performance Comparison

| Algorithm | Data Structure | Completeness | Optimality | Memory |
|----------|---------------|-------------|------------|--------|
| BFS | Queue | Yes | Yes | High |
| DFS | Stack | No | No | Low |

---

## Example Problem

Example search problems include:

- Tic Tac Toe
- Eight Queens Problem
- Missionaries and Cannibals
- Water Jug Problem

In this assignment BFS and DFS algorithms are implemented in C to demonstrate how uninformed search strategies explore the state space.
