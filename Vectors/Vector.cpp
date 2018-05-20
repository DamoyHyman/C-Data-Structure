#include <iostream>
#include <vector>
using namespace std;

/* 
Use for
 - Simple storage
 - Adding but not deleting
 - Serialization
 - Quick lookups by index
 - Easy conversion to C - style arrays
 - Efficient traversal(contiguous CPU caching)

Do not use for
 - Insertion / deletion in the middle of the list
 - Dynamically changing storage
 - Non - integer indexing
 - Time Complexity

 Operation	  Time Complexity
 Insert Head	O(n)
 Insert Index	O(n)
 Insert Tail	O(1)
 Remove Head	O(n)
 Remove Index	O(n)
 Remove Tail	O(1)
 Find Index	    O(1)
 Find Object	O(n)
*/

int main()
{
	vector<int> v;

	//---------------------------------
	// General Operations
	//---------------------------------

	// Insert head, index, tail
	v.insert(v.begin(), 1);             // head
	v.insert(v.begin() + 1, 2);         // index
	v.push_back(3);                     // tail

	// Access head, index, tail
	int head = v.front();       // head
	int value = v.at(1);        // index
	int tail = v.back();        // tail

	// Size
	unsigned int size = v.size();

	// Iterate
	for (vector<int>::iterator it = v.begin();  it != v.end(); it++)
	{
		cout << *it << endl;
	}

	// Remove head, index, tail
	v.erase(v.begin());             // head
	v.erase(v.begin() + 1);         // index
	v.pop_back();                   // tail

	// Clear
	v.clear();
	return 0;
}