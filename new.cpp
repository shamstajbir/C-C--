mplementation of Binary Search using the Divide & Conquer Approach.
2. Implementation of Quick Sort using Divide & Conquer Approach.
3. Implement Strassen Matrix Multiplication using Divide & Conquer
Approach.
4. Find out the Minimum Cost Spanning Tree using Kruskal’s
Algorithm with the help of the Greedy Approach.
5. Perform Job Sequencing with a deadline using the Greedy Approach.
6. Implement Travelling Salesman Problem (TSP) using Dynamic
Programming.
7. Perform Matrix Chain Multiplication Problem (MCM) using Dynamic
Programming.
8. Implement Graph Colouring Problem with Backtracking Approach.
9. Program to implement 4-Queen Problem using Backtracking Method
10. Program to implement 0/1 Knapsack Problem using Branch & Bound
Method.
Write some viva questions on this topics. With answer

ChatGPT
Here are a few viva questions on these topics, along with their answers:

Binary Search
Q1. What is the time complexity of the binary search algorithm?
A1. The time complexity of the binary search algorithm is 
𝑂
(
log
⁡
𝑛
)
O(logn), where 
𝑛
n is the number of elements in the array.

Q2. How does the binary search algorithm use the divide and conquer approach?
A2. Binary search divides the problem into two halves by comparing the target value with the middle element of the array. It then discards the half where the target cannot be found, reducing the problem's size by half with each iteration.

Quick Sort
Q3. What is the role of the pivot in the Quick Sort algorithm?
A3. The pivot is used to partition the array into two segments, where all elements on one side are smaller than the pivot, and all elements on the other side are larger. This process allows Quick Sort to recursively sort each partition.

Q4. What is the worst-case time complexity of Quick Sort, and how can it be mitigated?
A4. The worst-case time complexity is 
𝑂
(
𝑛
2
)
O(n 
2
 ), which occurs when the array is already sorted or nearly sorted, leading to unbalanced partitions. This can be mitigated by choosing a better pivot (like the median), using random pivots, or applying other strategies to balance the partitions.

Strassen Matrix Multiplication
Q5. How does Strassen's Matrix Multiplication differ from the standard approach?
A5. Strassen's algorithm reduces the number of multiplications required for matrix multiplication by dividing the matrices into smaller parts and combining results strategically. It has a time complexity of 
𝑂
(
𝑛
2.81
)
O(n 
2.81
 ), which is faster than the standard 
𝑂
(
𝑛
3
)
O(n 
3
 ).

Q6. What is the primary advantage of Strassen's Matrix Multiplication over the traditional approach?
A6. The primary advantage is its reduced number of multiplication operations, leading to faster computation times for large matrices.

Kruskal's Algorithm
Q7. What data structure is commonly used with Kruskal's Algorithm, and why?
A7. The disjoint-set (or union-find) data structure is commonly used to efficiently manage the connected components and detect cycles while building the minimum spanning tree.

Q8. How does Kruskal's Algorithm differ from Prim's Algorithm for finding minimum spanning trees?
A8. Kruskal's Algorithm starts with all edges, sorts them by weight, and then adds the shortest edges to the spanning tree, avoiding cycles. Prim's Algorithm starts with a vertex and builds the tree by adding the shortest edge from the current tree to an external vertex. Kruskal focuses on edges, while Prim focuses on vertices.

Job Sequencing with Deadlines
Q9. What is the goal of the Job Sequencing with Deadlines problem?
A9. The goal is to sequence jobs such that the maximum profit is obtained while meeting job deadlines.

Q10. How is the Greedy Approach used in Job Sequencing with Deadlines?
A10. The greedy approach selects the jobs with the highest profit that can be completed before their deadlines, ensuring that the total profit is maximized.

Travelling Salesman Problem (TSP)
Q11. What is the Travelling Salesman Problem, and why is it difficult?
A11. The Travelling Salesman Problem (TSP) involves finding the shortest possible route that visits each city once and returns to the origin city. It is considered difficult because it is NP-hard, meaning no polynomial-time algorithm is known to solve it optimally.

Q12. How does the Dynamic Programming approach solve the Travelling Salesman Problem?
A12. Dynamic Programming for TSP solves subproblems recursively and stores the results to avoid redundant computations. It uses the principle of optimality to break the problem into smaller subproblems and combine their results to find the optimal solution.

Matrix Chain Multiplication Problem (MCM)
Q13. What is the goal of the Matrix Chain Multiplication Problem?
A13. The goal is to determine the optimal parenthesization to minimize the cost (number of multiplications) of multiplying a chain of matrices.

Q14. How does Dynamic Programming help in solving the Matrix Chain Multiplication Problem?
A14. Dynamic Programming is used to store the cost of optimal subparenthesizations in a table, avoiding redundant calculations. The optimal substructure property allows the problem to be solved by building up from smaller subproblems to the full problem.

Graph Coloring Problem
Q15. What is the objective of the Graph Coloring Problem?
A15. The objective is to color the vertices of a graph such that adjacent vertices have different colors, with the goal of minimizing the number of colors used.

Q16. How does Backtracking work for solving the Graph Coloring Problem?
A16. Backtracking explores possible color assignments for each vertex. If a conflict arises (adjacent vertices with the same color), it backtracks to a previous vertex and tries a different color, systematically exploring all possibilities until a valid solution is found.

4-Queen Problem
Q17. What is the 4-Queen Problem, and what is the objective?
A17. The 4-Queen Problem involves placing four queens on a 4x4 chessboard such that no queen attacks another. The objective is to find all possible arrangements that meet this condition.

Q18. How does Backtracking work for solving the 4-Queen Problem?
A18. Backtracking places queens one at a time in valid positions. If a conflict arises (queens attacking each other), it backtracks to a previous position and tries a different placement. This process continues until a valid arrangement is found.

0/1 Knapsack Problem
Q19. What is the 0/1 Knapsack Problem, and what is the objective?
A19. The 0/1 Knapsack Problem involves selecting items with given weights and values to maximize the total value without exceeding a weight limit. The "0/1" indicates that each item can either be taken or not, with no fractions allowed.

Q20. How does the Branch and Bound approach work for the 0/1 Knapsack Problem?
A20. Branch and Bound divides the problem into subproblems (branches) and calculates upper bounds for their optimal solutions. If the upper bound of a branch is lower than the current best solution, the branch is pruned, focusing on promising subproblems and reducing the search space. This allows the problem to be solved more efficiently compared to brute-force methods.