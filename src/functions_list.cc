#include <functions/functions.h>
#include <stdexcept>

using namespace Class;
using namespace std;

LessonTimeList::LessonTimeList() : _size(0) {}

int LessonTimeList::size() const {
	return _size;
}

LessonTime LessonTimeList :: operator[](const int index) const {
	if (index < 0 || _size <= index)
	{
		throw out_of_range("[LessonTimeList::operator[]] Index is out of range.");
	}
	return _Worker[index];
}
void LessonTimeList::add(const LessonTime f) {
	if (_size == CAPACITY) {
		throw runtime_error("[LessonTimeList::add] Capacity is reached.");
	}
	_Worker[_size] = f;
	++_size;
}
void LessonTimeList::remove(int index)
{
	_size = 0;
}
void LessonTimeList::delete_person(int index)
{
	if (index < 0 || _size <= index)
	{
		throw out_of_range("[LessonTimeList::operator[]] Index is out of range.");
	}
	for (int i = index; i != CAPACITY - 1; i++)
	{
		_Worker[i] = _Worker[i + 1];
	}
	_size--;
}
void LessonTimeList::insert_person(LessonTime people, int index)
{
	if (index < 0 || _size <= index)
	{
		throw out_of_range("[LessonTimeList::operator[]] Index is out of range.");
	}
	else {
		for (int i = _size - 1; i != index; i--)
		{
			_Worker[i + 1] = _Worker[i];
		}
	}
	_Worker[index] = people;
	_size++;
}
int Class::search_max_salary(const LessonTimeList& _Worker)
{
	int a[10] = { 0 };
	int max = 0;
	int max_index = -1;
	for (int i = 0; i < _Worker.size(); i++)
	{
		a[_Worker[i].get_name()] += _Worker[i].Res();
		if (a[_Worker[i].get_name()] > max) {
			max = a[_Worker[i].get_name()];
			max_index = _Worker[i].get_name();
		}
	}
	return max_index;
}
int Class::search(const LessonTimeList& _Worker, Name name)
{
	int value = 0;
	for (int i = 0; i < _Worker.size(); i++)
	{
		if (_Worker[i].get_name() == name)
		{
			value += _Worker[i].Res();
		}
	}
	return value;
}