#include <iostream>
#include <string>
#include "StringList.h"

StringList::StringList()
{
 _data = 0;
_dataL = 0;
_size = 0;
}

StringList::StringList(const StringList& other)
{
	*this = other;
}


StringList::~StringList()
{
	while(!empty())
	pop_front();
}

std::string& StringList::front()
{
	return _data->str;
}

void StringList::clear()
{
	while( !empty())
	       pop_front();	
	
}
std::string& StringList::back()
{
	return _dataL->str;
}

void StringList::push_front(std::string str)
{
	llist *newItem = new llist;
	newItem->str = str;
	newItem->next = _data;
	newItem->prev = NULL;
	if (_data != NULL)
		_data->prev = newItem;
	if( _dataL == NULL)
		_dataL = newItem;
	_data = newItem;
	_size++;
}



void StringList::pop_front()
{
	if (!empty())
	{
		llist *ptr = _data;
		_data = _data->next;
		if (_data!= NULL)
			_data->prev = _data->prev->prev;
		else
			_dataL = NULL;
		delete ptr;
		_size--;
	}
}

void StringList::pop_back()
{
	if (!empty())
	{
		llist *ptr = _dataL;
		_dataL = _dataL->prev;
		if(_dataL != NULL)
			_dataL->next = _dataL ->next->next;
		else
			_data = NULL;
		delete ptr;
		_size--;
	}
}
void StringList::unique() 
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
size_t StringList::size() const
{
	return _size; 
}
void StringList::push_back(std::string str)
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

bool empty() 
{
	return _data == 0;
}
//----------------------return function-----------------------------
StringList::llist *StringList::getdata() const
{
	return _data;
}
StringList::llist *StringList::getdatal() const
{
	return _dataL;
}
//---------------------printer------------------------------------------
void StringList::printp()
{
	for (llist *ptr = _head; ptr != NULL; ptr = ptr->next)
		std::cout << ptr->str << " ";
	std::cout << std::endl;
}
