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
	llist* savePtr = _data;
	_data = _data->next;
	if(_data)
	_data->prev = _data->prev->prev;
	else
		_dataL = 0;
	delete savePtr;
}

StringList::void pop_back(std::string str)
{
	delete this.back();
	_size--;
}
StringList::void unique() 
{
	for (llist *ptr = _data; ptr != 0; ptr = ptr->next)
	{
		while (ptr -> next != 0 && ptr->str == ptr->next->str)
		{
			llist *savePtr = ptr->next;
			ptr->next = savePtr->next;
			if(savePtr->next != 0)
			savePtr->next->prev = ptr;
			else
				_dataL = ptr;
			delete savePtr;
			_size--;

		}
	}
}
StringList::void size() { return _size; }
StringList:: void push_back(std::string str)
{
	llist *newItem = new llist;
	newItem->str = str;
	newItem->next = 0;
	newItem->prev = _dataL;
	_dataL = newItem;
	if (_dataL != 0)
		_dataL->next = newItem;
	if (_data == 0)
		_data = newItem;
	_dataL = newItem;
	_size++;

}

bool empty() const
{
	return _data == 0;
}
