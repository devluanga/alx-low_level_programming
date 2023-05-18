**0x17. C - Doubly linked lists**

A doubly linked list is a type of linked list where each node contains two pointers, 
  one pointing to the previous node and another pointing to the next node. 
  This allows traversal in both forward and backward directions.

Key features of a doubly linked list:
	1. Node Structure: Each node in a doubly linked list contains 
	two pointers: one pointing to the previous node and another pointing to the next node.
	2. Head and Tail: A doubly linked list typically has a head pointer 
	that points to the first node and a tail pointer that points to the last node.
	3. Bidirectional Traversal: With the help of the previous and next pointers, 
	it is possible to traverse the list in both forward and backward directions.
	4. Insertion and Deletion: Nodes can be easily inserted or deleted 
	from a doubly linked list by updating the appropriate pointers.
	5. Memory Overhead: Due to the presence of an additional pointer in each node, 
	a doubly linked list consumes slightly more memory compared to a singly linked list.

Advantages of using a doubly linked list:
1. Bidirectional Traversal: 
	Doubly linked lists allow efficient traversal 
	in both forward and backward directions.
2. Insertion and Deletion: 
	Insertion and deletion operations can be performed in constant time, 
	  given the node to be inserted or deleted.
3. Reverse Traversal: Reversing a doubly linked list is more straightforward compared to a singly linked list.

Disadvantages of using a doubly linked list:
	1. Increased Memory Usage: Doubly linked lists consume slightly more memory,
       	compared to singly linked lists due to the additional pointer in each node.
	2. Increased Complexity: The presence of two pointers in each node increases
       	the complexity of implementing and maintaining a doubly linked list compared to a singly linked list.

Overall, doubly linked lists provide bidirectional traversal and 
efficient insertion/deletion operations, but they come with a trade-off of increased memory usage 
and complexity compared to singly linked lists.
