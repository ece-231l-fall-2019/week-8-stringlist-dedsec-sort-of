#include <iostream>
#include <string>

class StringList
{
	private:

	typedef struct llist {
		std::string str;
		struct llist *next;
		struct llist *prev;
	} llist;

	llist *_data;
	llist *_dataL;
	int _size;

	public:
	
	// default constructor
	StringList()
	{
		_data = 0;
		_dataL = 0;
		_size = 0;
	}

	// copy constructor
	StringList(const StringList& other);

	// destructor
	~StringList();

	// copy operator
	StringList& operator=(const StringList&);

	std::string& front();

	StringList::void push_front(std::string str):

	StringList::void pop_front();

	bool empty() const;
	
		StringList::void clear();
		StringList::void back();
		StringList::void pop_back (std::string str);
		StringList::void unique();
		//missing
		StringList::void size();
		StringList::void push_back();
		StringList::void reverse();
};

