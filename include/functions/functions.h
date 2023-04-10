#pragma once
#include <string>
namespace Class {

	enum Type {
		Lectures,
		Laboratory,
		Practices
	};
	enum Name {
		OOP,
		History,
		English,
		Math_Analysis,
		Algebra,
		υσι,
		PE,
		MathLogic,
		Physics,
	};
	class LessonTime {
	private:
		Type _type;
		Name _name;
		int _count;
		int _hours;
	public: 
		LessonTime(Type type, Name name, int count, int hours);
		LessonTime(Type type, int count, int hours);
		LessonTime();
		int Res();
		Name get_name();
	};
	class LessonTimeList {
	public:
		static const int CAPACITY = 10;
		LessonTimeList();
		int size() const;
		LessonTime operator[](int index) const;
		void add(LessonTime f);
		void delete_person(int index);
		void insert_person(LessonTime people, int index);
		void remove(int index);
	private:
		LessonTime _Worker[CAPACITY];
		int _size;
	};
	int search_max_salary(const LessonTimeList& _Worker);
	int search(const LessonTimeList& _Worker, Name name);
}

