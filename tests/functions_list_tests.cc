#include <gtest/gtest.h>
#include <functions/functions.h>

using namespace Class;

TEST(LessonTimeList, search_max_salary)
{
    LessonTimeList _LessonTime;
    _LessonTime.add(LessonTime(Laboratory, 4, 777));
    _LessonTime.add(LessonTime(Laboratory, 4, 877));
    _LessonTime.add(LessonTime(Laboratory, 4, 977));
    ASSERT_EQ(search_max_salary(_LessonTime), 2);

}
