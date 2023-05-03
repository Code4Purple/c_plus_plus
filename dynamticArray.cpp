/**
	Notes
		data structure (DS) - is a way of organizing data so that it can be used effectively
	Abstract Data Types vs Data Structure
		Abstract Data Type (ADT) - is an abstraction of the DS which provides only the interface to which a DS must adhere to.
		The Interface deos no give any specific details about how something should be implemented

				Examples
	Abstraction (ADT)	|	Implementation
	List				Dynamic Array, Linked List
	Queue				Linked List based Queue, Array based on Queue, Stack based Queue
	Map				Tree Map,  Hash map / Hash Table
	Vechicle			Golf Cart, Bicycle, Smart CAr

	Computational Complexity Analysis
		Complexity Analysis (Qs)
			How much time deos this algorithm need to finish?
			How much space deos this algorithm need for its computation?
		Big-O Notation
			Big-O Notation gives an upper bound of the complexity to quantify performance as the input size becomes arbitrarily large.

		n- The Size of the input
		Complexities ordered in from smallest to largest
			Constant Time: 		0(1)
			Logarithmic Time:	0(log(n))
			Linear Time:		0(n)
			Linearithmic Time:	0(nlog(n))
			Quadric Time:		0(n^2)
			Cubic Time		0(n^3)
			Exponential Time:	0(b^n), b > 1
			Factorial Time:		0(n!)

	Big-O Properties
		Big-O Examples
			The following run in constant time: 0(1)
				a:=1 , b:=1 , c:= a + 5*b
				i:=0
				while i  < 11 Do i = i + 1
			The following run in linear time: 0(n)
				i:=0
				while i < n do i = i + 1
					f(n) = n
					o(f(n)) = 0(n)

				while i < n do i = i + 3  **x3 faster loop**
					f(n) = n / 3
					0(f(n)) = 0(n)


*/
// https://youtu.be/RBSGKlAvoiM?t=694
