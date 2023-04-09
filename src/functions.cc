#include <functions/functions.h>

using namespace Class;
using namespace std;


LessonTime::LessonTime(Type type, Name name, int count, int hours)
{
	_type = type;
	_name = name;
	_count = count;
	_hours = hours;
}

LessonTime::LessonTime()
{
	_type = Lectures;
	_name = OOP;
	_count = 0;
	_hours = 0;
}

LessonTime::LessonTime(Type type, int count, int hours)
{
	_type = type;
	_name = OOP;
	_count = count;
	_hours = hours;
}

int LessonTime::Res() {
	if (_type == Lectures) {
		return _hours;
	}
	if (_type == Laboratory) {
		return _hours * _count * 2;
	}
	if (_type == Practices) {
		return _hours * _count;
	}
}