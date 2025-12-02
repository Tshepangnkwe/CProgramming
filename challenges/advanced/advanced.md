# Advanced Algorithm Challenges

Complete these 20 advanced practice problems to master algorithms in C. These challenges focus on sorting, searching, recursion, and algorithm optimization.

## Instructions

- Create a separate C file for each problem
- Name your files: `advanced_01.c`, `advanced_02.c`, etc.
- Include comments explaining your algorithm and time complexity
- Test with various inputs including edge cases
- Use proper C naming conventions (snake_case)
- Focus on algorithm efficiency and optimization

---

## Problem 1: Bubble Sort Implementation
**File:** `advanced_01.c`

**Difficulty:** ⭐⭐  
**Objective:** Implement the bubble sort algorithm from scratch.

**Requirements:**
- Sort an array in ascending order
- Display array before and after sorting
- Count and display number of comparisons and swaps
- Time complexity: O(n²)

**Example Output:**
```
Before: 64 34 25 12 22 11 90
After:  11 12 22 25 34 64 90
Comparisons: 21, Swaps: 15
```

---

## Problem 2: Selection Sort Implementation
**File:** `advanced_02.c`

**Difficulty:** ⭐⭐  
**Objective:** Implement the selection sort algorithm.

**Requirements:**
- Find minimum element and swap with first unsorted position
- Show step-by-step sorting process
- Compare performance with bubble sort

---

## Problem 3: Insertion Sort Implementation
**File:** `advanced_03.c`

**Difficulty:** ⭐⭐  
**Objective:** Implement the insertion sort algorithm.

**Requirements:**
- Build sorted array one element at a time
- Display intermediate steps
- Handle already sorted and reverse sorted arrays

---

## Problem 4: Quick Sort Implementation
**File:** `advanced_04.c`

**Difficulty:** ⭐⭐⭐  
**Objective:** Implement the quick sort algorithm using divide and conquer.

**Requirements:**
- Use recursive approach
- Implement partition function
- Choose appropriate pivot selection strategy
- Time complexity: O(n log n) average case

---

## Problem 5: Merge Sort Implementation
**File:** `advanced_05.c`

**Difficulty:** ⭐⭐⭐  
**Objective:** Implement the merge sort algorithm.

**Requirements:**
- Use divide and conquer approach
- Implement merge function correctly
- Show recursive call stack depth
- Time complexity: O(n log n) guaranteed

---

## Problem 6: Linear Search Implementation
**File:** `advanced_06.c`

**Difficulty:** ⭐  
**Objective:** Implement linear search with enhancements.

**Requirements:**
- Search for element in unsorted array
- Return all occurrences of element
- Count number of comparisons
- Time complexity: O(n)

---

## Problem 7: Binary Search Implementation
**File:** `advanced_07.c`

**Difficulty:** ⭐⭐  
**Objective:** Implement binary search algorithm (iterative and recursive).

**Requirements:**
- Implement both iterative and recursive versions
- Works only on sorted arrays
- Display search steps
- Time complexity: O(log n)

---

## Problem 8: Interpolation Search
**File:** `advanced_08.c`

**Difficulty:** ⭐⭐⭐  
**Objective:** Implement interpolation search for uniformly distributed data.

**Requirements:**
- Better than binary search for uniform distributions
- Calculate probe position using interpolation formula
- Compare performance with binary search
- Time complexity: O(log log n) for uniform data

---

## Problem 9: Jump Search Implementation
**File:** `advanced_09.c`

**Difficulty:** ⭐⭐  
**Objective:** Implement jump search algorithm.

**Requirements:**
- Jump ahead by fixed steps
- Perform linear search in identified block
- Calculate optimal jump size (√n)
- Time complexity: O(√n)

---

## Problem 10: Fibonacci Using Recursion
**File:** `advanced_10.c`

**Difficulty:** ⭐⭐  
**Objective:** Generate Fibonacci sequence using recursion.

**Requirements:**
- Implement recursive Fibonacci function
- Display first n terms
- Count recursive calls for analysis
- Discuss inefficiency and optimization

---

## Problem 11: Fibonacci Using Dynamic Programming
**File:** `advanced_11.c`

**Difficulty:** ⭐⭐⭐  
**Objective:** Optimize Fibonacci using memoization.

**Requirements:**
- Use array to store computed values
- Compare with naive recursive approach
- Show significant performance improvement
- Time complexity: O(n)

---

## Problem 12: Tower of Hanoi
**File:** `advanced_12.c`

**Difficulty:** ⭐⭐⭐  
**Objective:** Solve Tower of Hanoi puzzle using recursion.

**Requirements:**
- Move n disks from source to destination
- Use auxiliary peg
- Display each move
- Count total moves (should be 2^n - 1)

---

## Problem 13: Binary Search Tree Operations
**File:** `advanced_13.c`

**Difficulty:** ⭐⭐⭐  
**Objective:** Implement basic BST operations.

**Requirements:**
- Insert, search, delete operations
- In-order, pre-order, post-order traversals
- Find minimum and maximum values
- Calculate tree height

---

## Problem 14: Graph Traversal - DFS
**File:** `advanced_14.c`

**Difficulty:** ⭐⭐⭐  
**Objective:** Implement Depth-First Search for graph traversal.

**Requirements:**
- Use adjacency matrix or adjacency list
- Implement using recursion or stack
- Mark visited nodes
- Display traversal order

---

## Problem 15: Graph Traversal - BFS
**File:** `advanced_15.c`

**Difficulty:** ⭐⭐⭐  
**Objective:** Implement Breadth-First Search for graph traversal.

**Requirements:**
- Use queue for level-order traversal
- Find shortest path in unweighted graph
- Display level-wise nodes
- Handle disconnected graphs

---

## Problem 16: String Matching - Naive Algorithm
**File:** `advanced_16.c`

**Difficulty:** ⭐⭐  
**Objective:** Implement naive string matching algorithm.

**Requirements:**
- Find all occurrences of pattern in text
- Display starting positions
- Count comparisons
- Time complexity: O(n*m)

---

## Problem 17: String Matching - KMP Algorithm
**File:** `advanced_17.c`

**Difficulty:** ⭐⭐⭐⭐  
**Objective:** Implement Knuth-Morris-Pratt pattern matching.

**Requirements:**
- Build LPS (Longest Proper Prefix-Suffix) array
- Avoid unnecessary comparisons
- Compare performance with naive approach
- Time complexity: O(n + m)

---

## Problem 18: Dynamic Programming - Longest Common Subsequence
**File:** `advanced_18.c`

**Difficulty:** ⭐⭐⭐⭐  
**Objective:** Find longest common subsequence of two strings.

**Requirements:**
- Use dynamic programming table
- Reconstruct the LCS
- Display DP table for understanding
- Time complexity: O(n*m)

---

## Problem 19: Dynamic Programming - 0/1 Knapsack
**File:** `advanced_19.c`

**Difficulty:** ⭐⭐⭐⭐  
**Objective:** Solve the 0/1 knapsack problem.

**Requirements:**
- Given weights, values, and capacity
- Find maximum value without exceeding capacity
- Display selected items
- Use DP table

---

## Problem 20: Algorithm Analysis and Comparison
**File:** `advanced_20.c`

**Difficulty:** ⭐⭐⭐  
**Objective:** Compare performance of different sorting algorithms.

**Requirements:**
- Implement at least 3 sorting algorithms
- Measure execution time for different array sizes
- Plot or display time complexity comparison
- Test with best, average, and worst cases

---

## Algorithm Complexity Reference

### Sorting Algorithms
| Algorithm | Best Case | Average Case | Worst Case | Space |
|-----------|-----------|--------------|------------|-------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |

### Searching Algorithms
| Algorithm | Best Case | Average Case | Worst Case | Requirement |
|-----------|-----------|--------------|------------|-------------|
| Linear Search | O(1) | O(n) | O(n) | None |
| Binary Search | O(1) | O(log n) | O(log n) | Sorted array |
| Jump Search | O(1) | O(√n) | O(√n) | Sorted array |
| Interpolation | O(1) | O(log log n) | O(n) | Sorted, uniform |

---

## Testing Your Solutions

For each problem, test with:
1. **Small datasets** - Easy to verify manually
2. **Large datasets** - Test performance and efficiency
3. **Edge cases** - Empty arrays, single element, duplicates
4. **Best case** - Already sorted, element at start
5. **Worst case** - Reverse sorted, element at end or not found
6. **Average case** - Random data distribution

---

## Evaluation Criteria

Your solutions should demonstrate:
- [ ] Correct algorithm implementation
- [ ] Proper time and space complexity
- [ ] Efficient code without unnecessary operations
- [ ] Handling of edge cases and error conditions
- [ ] Clear comments explaining algorithm logic
- [ ] Performance analysis and comparison
- [ ] Code optimization where applicable

---

## Key Concepts to Master

### 1. Algorithm Design Paradigms
- **Divide and Conquer**: Quick sort, merge sort, binary search
- **Dynamic Programming**: Fibonacci, LCS, knapsack
- **Greedy Algorithms**: Activity selection, Huffman coding
- **Backtracking**: N-Queens, Sudoku solver

### 2. Data Structures for Algorithms
- **Arrays**: Foundation for sorting and searching
- **Linked Lists**: Dynamic data structure operations
- **Stacks**: DFS, expression evaluation
- **Queues**: BFS, scheduling algorithms
- **Trees**: BST, heaps, tries
- **Graphs**: Shortest path, MST algorithms

### 3. Algorithm Analysis
- **Time Complexity**: Big O notation
- **Space Complexity**: Memory usage
- **Best/Average/Worst Cases**: Different scenarios
- **Amortized Analysis**: Average over sequence of operations

---

## Optimization Techniques

1. **Loop Optimization**
   - Minimize loop iterations
   - Avoid unnecessary calculations inside loops
   - Use early termination when possible

2. **Space-Time Tradeoff**
   - Use memoization for recursive algorithms
   - Cache frequently accessed data
   - Balance memory usage vs. speed

3. **Algorithm Selection**
   - Choose algorithm based on data characteristics
   - Consider input size and distribution
   - Use hybrid approaches when beneficial

4. **Code Optimization**
   - Use efficient data structures
   - Minimize function call overhead
   - Optimize critical sections

---

## Tips for Success

1. **Understand Before Implementing**: Study the algorithm thoroughly
2. **Draw It Out**: Visualize algorithm steps with diagrams
3. **Start Simple**: Test with small examples first
4. **Analyze Complexity**: Always determine time and space complexity
5. **Compare Approaches**: Understand why one algorithm is better than another
6. **Practice Variations**: Try different implementations of same algorithm
7. **Measure Performance**: Use actual timing for large datasets
8. **Study Trade-offs**: Understand pros and cons of each approach

---

## Advanced Topics to Explore

After mastering these challenges:
- **Graph Algorithms**: Dijkstra's, Bellman-Ford, Floyd-Warshall
- **Advanced Data Structures**: AVL trees, Red-Black trees, B-trees
- **String Algorithms**: Rabin-Karp, Boyer-Moore
- **Computational Geometry**: Convex hull, line intersection
- **Approximation Algorithms**: For NP-hard problems
- **Parallel Algorithms**: Multi-threaded sorting and searching

---

## Resources for Further Learning

1. **Books**
   - "Introduction to Algorithms" (CLRS)
   - "The Art of Computer Programming" (Knuth)
   - "Algorithm Design Manual" (Skiena)

2. **Online Platforms**
   - LeetCode, HackerRank, CodeForces
   - Visualgo.net for algorithm visualization
   - GeeksforGeeks for tutorials

3. **Practice**
   - Solve competitive programming problems
   - Implement algorithms from research papers
   - Contribute to open-source algorithm libraries

---

Remember: Algorithm mastery comes through understanding the logic, analyzing complexity, and practicing implementations. Don't just memorize - understand WHY each algorithm works!

Happy Coding! 🚀
