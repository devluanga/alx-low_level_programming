		Linked List
The linked list is a data structure that links each node to the next node. The developer can use the linked list in the following use cases.

	When the developer needs constant time for insertion and deletion.
	When the data dynamically grows.
	Do not access random elements from the linked list.
	Insert the element in any position of the list.


	Circular Linked List

A circular linked list is a linked list in which the link field of the tail node link to the head node. The developer can use a circular linked list in the following use cases.

	Develop the buffer memory.
	Represent a deck of cards in a game.
	Browser cache allows hitting the BACK button.
	Implement the Most Recently Used (MRU) list.
	Undo functionality in Photoshop or Word.

	
	Doubly Linked List
Doubly linked is a data structure in which each node contains data and two links. One link point to the previous node and another link point to the next node. The developer can use a doubly linked list in the following uses cases.

	Easier to delete the node from the doubly linked list.
	It can be iterated in reverse order without recursion implementation.
	Insert or remove from double-linked lists faster.


//define a linkedlist node

		struct node
			{
				int data;
				struct node *link;
			};

