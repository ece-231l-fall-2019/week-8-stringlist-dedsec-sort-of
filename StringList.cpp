#include <iostream>
#include <string>
#include <vector>
#include "StringList.h"

StringList::StringList(const StringList& other)
{
	this = other;
}


 ~StringList()
{
	while(!empty())
	pop_front()
}

std::string& front()
{
	return _data->str;
}

StringList::void clear()
{
	while( empty() == false) 
	{
		pop_back();
	}
	size = 0;
}
StringList::string& back()
{
	return _dataL;
}

StringList::void push_front(std::string str)
{
	llist *newItem = new llist;
	newItem->str = str;
	newItem->next = _data;
	_data = newItem;
}



StringList::void pop_front()
{
	llist *front = _data;
	_data = front->next;
	delete front;
	_size--;
}

StringList::void pop_back(std::string str)
{
	delete this.back();
	_size--;
}
StringList::void unique() 
{
	llist *temp = _data;
	for( int i = 0; i < this.size(); i++ )
	{
		std::string tempD = temp -> str;
		if (tempD == temp->next->str)
		{
			if (temp->next->next != NULL)
				temp->next = temp->next->next;
			temp->next->previous = temp;
			delete temp->next;
			i--;
		}
		else 
		{
			temp = temp->next;
		}
	}
}
StringList::void size() { return _size; }
StringList:: void push_back(std::string str)
{
	llist *newItem = new llist;
	newItem->str = str;
	newItem->prev = _dataL;
	_dataL = newItem;
											        }

bool empty() const
{
	return _data == 0;
}
