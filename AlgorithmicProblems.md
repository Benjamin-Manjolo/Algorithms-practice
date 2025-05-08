# Algorithmic Problems for Practice

This document contains a set of algorithmic problems to practice using data structures such as linked lists, stacks, queues, and binary search trees. Each problem includes a description, hints, and a sample solution outline.

## Beginner Level

### 1. Reverse a Linked List

**Problem:** Given a singly linked list, reverse the list and return the reversed list.

**Hint:** Use three pointers: previous, current, and next to reverse the links.

**Sample Solution Outline:**

- Initialize three pointers: prev = NULL, curr = head, next = NULL.
- Iterate through the list, for each node:
  - Store next node.
  - Reverse current node's pointer to prev.
  - Move prev and curr one step forward.
- Return prev as the new head.

---

### 2. Balanced Parentheses using Stack

**Problem:** Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid (balanced parentheses).

**Hint:** Use a stack to push opening brackets and pop when matching closing brackets are found.

**Sample Solution Outline:**

- Traverse the string.
- Push opening brackets onto the stack.
- For closing brackets, check if the top of the stack is the matching opening bracket.
- If not matching or stack empty, return false.
- At the end, if stack is empty, return true.

---

## Intermediate Level

### 3. Implement a Queue using Two Stacks

**Problem:** Implement a queue using two stacks.

**Hint:** Use one stack for enqueue operations and another for dequeue operations.

**Sample Solution Outline:**

- For enqueue, push elements onto stack1.
- For dequeue, if stack2 is empty, pop all elements from stack1 and push onto stack2.
- Pop from stack2 for dequeue.

---

### 4. Find the Lowest Common Ancestor in a BST

**Problem:** Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes.

**Hint:** Use BST properties to traverse from root.

**Sample Solution Outline:**

- Start from root.
- If both nodes are smaller than root, go left.
- If both nodes are greater than root, go right.
- Otherwise, root is LCA.

---

## Advanced Level

### 5. Detect Cycle in a Linked List

**Problem:** Given a linked list, determine if it has a cycle.

**Hint:** Use Floyd’s Cycle-Finding Algorithm (slow and fast pointers).

**Sample Solution Outline:**

- Initialize two pointers slow and fast at head.
- Move slow by one step and fast by two steps.
- If they meet, cycle exists.
- If fast reaches NULL, no cycle.

---

### 6. Implement Dijkstra’s Algorithm

**Problem:** Given a graph, find the shortest path from a source node to all other nodes.

**Hint:** Use a priority queue to pick the minimum distance vertex.

**Sample Solution Outline:**

- Initialize distances to all vertices as infinite except source.
- Use a min-priority queue to pick vertex with minimum distance.
- Update distances of adjacent vertices.
- Repeat until all vertices processed.

---

Feel free to ask for code implementations, explanations, or more problems on specific topics.
