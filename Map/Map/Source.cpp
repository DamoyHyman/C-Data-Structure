#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <stdio.h>
using namespace std;

/*
Use for:
 - Key - value pairs
 - Constant lookups by key
 - Searching if key / value exists
 - Removing duplicates
 - map
    .Ordered map
 - unordered_map
    .Hash table

Do not use for:
 - Sorting

Notes
 - Typically ordered maps(std::map) are slower than unordered maps(std::unordered_map)
 - Maps are typically implemented as binary search trees

Time Complexity
std::map
 Operation	          Time Complexity
 Insert	                O(log(n))
 Access by Key	        O(log(n))
 Remove by Key 	        O(log(n))
 Find / Remove Value	O(log(n))

std::unordered_map
 Operation	     Time Complexity
 Insert	            O(1)
 Access by Key	    O(1)
 Remove by Key	    O(1)
 Find / Remove Value--
*/
char firstOccurance(string s);

int main()
{
	string test = "ABACBA";
	map<string, string> m; // Regular map

	//---------------------------------
	// General Operations of MAP
	//---------------------------------

	// Insert
	//m.insert("key", "value");
	m["key"] = "value";
	// Access by key
	string value = m.at("key");

	// Size
	unsigned int size = m.size();

	// Iterate
	map<string, string>::iterator it;
	for ( it = m.begin(); it != m.end(); it++) 
	{
		cout << it->first << " => " << it->second << endl;
	}

	// Remove by key
	//m.erase("key");

	// Clear
	m.clear();

	//---------------------------------
	// Container-Specific Operations
	//---------------------------------

	// Find if an element exists by key
	bool exists = (m.find("key") != m.end());

	// Count the number of elements with a certain key
	unsigned int count = m.count("key");
	
	
	cout << "The first occurance of " << test << ": " << firstOccurance(test) << endl;


	return 0;
}

char firstOccurance(string s)
{
	unordered_map<char, int> hash;

	for (char & c : s )
	{
		if (hash.find(c) != hash.end()) // Key already exist
			return c;

		hash[c] = 1; // Insert
	}

	return NULL;
}