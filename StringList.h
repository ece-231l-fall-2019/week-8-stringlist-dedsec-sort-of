#include <iostream>
#include <string>

class StringList
{
	private:
	size_t _size;
	typedef struct llist {
	std::string str;
	struct llist *next;
	struct llist *prev;
	} llist;

	llist *_data;
	llist *_dataL;


	public:
	
	// default constructor
	StringList();


	// copy constructor
	StringList(const StringList& other);

	// destructor
	~StringList();

	// copy operator
	StringList& operator= (std::string str);


	std::string& front();

	void push_front(std::string str);

	void pop_front();

	bool empty();
	
		void clear();
		std::string& back();
		void pop_back ();
		void unique();
		//missing
		size_t size() const;
		void push_back(std::string str);

		void reverse()
		{
         	if ( size() <= 1)
                         return;
         	llist *end = _data;
         	llist *temp;
         	while (end != NULL)
         	{
                 temp = end->prev;
                 end->prev = end->next;
                 end->next = temp;
                 end = end->prev;
         	}

                 if (temp)
                         temp = temp->prev;
                 _dataL = _data;
                 _data = temp;
        	 }


//---------------return function--------------------------------
		StringList::llist *getdata()const;
		StringList::llist *getdatal()const;
//------------------printer------------------------------------
	//	void printp();


};


