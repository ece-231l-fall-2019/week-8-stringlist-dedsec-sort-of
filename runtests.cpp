#include <iostream>

// change the value below to 1 to run tests against your StringList class.
// change the value below to 0 to run tests against the built in std::list.

#if 1
#include "StringList.h"
#else
#include <list>
#include <string>
typedef std::list<std::string> StringList;
#endif

void Assert(bool cond, std::string message)
{
	if (cond)
		std::cout << "Pass: " << message << std::endl;
	else
		std::cerr << "FAIL: " << message << std::endl;
}

int main()
{
	// TODO:
	// Write *at least* 15 more tests to fully test
	// your class.

	StringList a;

	a.push_back("A");
	a.push_back("B");
	a.push_front("C");
	a.push_front("D");
	a.push_back("E");

	Assert(a.size() == 5, "size method");

	Assert(a.front() == "D", "front method");
	a.pop_front();
	Assert(a.front() == "C", "pop_front method");
	Assert(a.back() == "E", "back method");
	a.pop_back();
	Assert(a.back() == "B", "pop_back method");
	a.pop_front();
	Assert(a.front() == "A", "front method");
	a.pop_back();
	Assert(a.back() == "A", "back method");
	
	StringList t;
	t.push_back("W");
	t.push_back("E");
	t.push_back(" ");
	t.push_back("A");
	t.push_back("R");
	t.push_back("E");
	t.push_back(" ");
	t.push_back("D");
	t.push_back("E");
	t.push_back("D");
	t.push_back("S");
	t.push_back("E");
	t.push_back("C");

	Assert(t.size() == 13, "Testing...");
	t.printp();
	return 0;
}


