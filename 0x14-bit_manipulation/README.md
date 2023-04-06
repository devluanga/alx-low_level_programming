
						Bit manipulation in C

is like playing with LEGO blocks, where each block represents a binary digit, either a 0 or a 1. You can use these blocks to build and modify numbers in a very precise way.

Imagine you have a number written in binary, which is a series of 0s and 1s. For example, the binary number "1010" represents the decimal number 10. Now, let's say you want to change the second bit from the right (the one representing 2^1) to 1, while keeping the other bits unchanged. You can do this using bit manipulation in C!

In C, you can use bitwise operators to manipulate individual bits of a number. Here are some common bitwise operators:


				Bitwise AND (&): 
	This operator compares each bit of two numbers and returns a new number where each bit is set to 1 only if both corresponding bits in the original numbers are 1. Otherwise, the resulting bit is set to 0.
Example:
		
		int num1 = 0b1010; // Binary representation of 10
		int num2 = 0b1100; // Binary representation of 12
		
		int result = num1 & num2; // Bitwise AND operation

		The result will be 0b1000, which is the binary representation of 8.

Bitwise OR (|):
	
	This operator compares each bit of two numbers and returns a new number
	where each bit is set to 1 if at least one of the corresponding bits in the original numbers is 1.
	Otherwise, the resulting bit is set to 0.
Example:
				
		int num1 = 0b1010; // Binary representation of 10
		int num2 = 0b1100; // Binary representation of 12
		
		int result = num1 | num2; // Bitwise OR operation

		The result will be 0b1110, which is the binary representation of 14.

Bitwise XOR (^):
	This operator compares each bit of two numbers and returns a new number where 
	each bit is set to 1 only if exactly one of the corresponding bits in the original numbers is 1.
	Otherwise, the resulting bit is set to 0.
Example:

		int num1 = 0b1010; // Binary representation of 10
		int num2 = 0b1100; // Binary representation of 12
		
		int result = num1 ^ num2; // Bitwise XOR operation
		
		The result will be 0b0110, which is the binary representation of 6.

Bitwise NOT (~):
	This operator inverts the bits of a number, changing 0s to 1s and vice versa.
Example:

		int num1 = 0b1010; // Binary representation of 10
		
		int result = ~num1; // Bitwise NOT operation
		
		The result will be 0b0101, which is the binary representation of 5.

		
These bitwise operators can be used to perform various bit manipulation tasks, such as:
	*setting a specific bit to 1 or 0,
	*flipping the value of a bit,
       	*extracting the value of a particular bit from a number. 
These operations are useful in many applications, such as:
	>>working with binary data,
	>>encoding/decoding,
	>>and optimizing memory usage in embedded systems, among others.

For example,
    
    let's say you have a program that uses a set of flags to represent different settings.
    You can use a single integer variable to store these flags,
    where each bit in the integer represents a specific setting. You can then use bitwise operators
