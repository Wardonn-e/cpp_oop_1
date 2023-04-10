#include <gtest/gtest.h>
#include <functions/functions.h>

using namespace Class;

TEST(LessonTimeList, search)
{
    LessonTimeList _LessonTime;
    _LessonTime.add(LessonTime(Laboratory, OOP, 1, 1));
    _LessonTime.add(LessonTime(Laboratory, OOP, 1, 1));
    _LessonTime.add(LessonTime(Laboratory, History, 1, 1));
    ASSERT_EQ(search(_LessonTime, OOP), 4);

}

TEST(LessonTimeList, search_max_salary)
{
    LessonTimeList _LessonTime;
    _LessonTime.add(LessonTime(Lectures, OOP, 2, 2));
    _LessonTime.add(LessonTime(Lectures, OOP, 2, 2));

    _LessonTime.add(LessonTime(Laboratory, History, 22, 22));
    ASSERT_EQ(search_max_salary(_LessonTime), History);

}

