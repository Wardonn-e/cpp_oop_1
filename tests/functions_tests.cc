#include <gtest/gtest.h>

#include <functions/functions.h>

using namespace Class;

TEST(FunctionsTests, Test1) {
    LessonTime lectures_777 = LessonTime(Lectures, 4, 777);
    EXPECT_EQ(lectures_777.Res(), 777);
}
TEST(FunctionsTests, Test2) {
    LessonTime lectures_10 = LessonTime(Lectures, 4, 10);
    EXPECT_EQ(lectures_10.Res(), 10);
}
TEST(FunctionsTests, Test3) {
    LessonTime lectures_9 = LessonTime(Lectures, 4, 9);
    EXPECT_EQ(lectures_9.Res(), 9);
}


TEST(FunctionsTests, Test4) {
    LessonTime laboratory_4_777 = LessonTime(Laboratory, 4, 777);
    EXPECT_EQ(laboratory_4_777.Res(), 6216);
}
TEST(FunctionsTests, Test5) {
    LessonTime laboratory_2_7 = LessonTime(Laboratory, 2, 7);
    EXPECT_EQ(laboratory_2_7.Res(), 28);
}
TEST(FunctionsTests, Test6) {
    LessonTime laboratory_5_1 = LessonTime(Laboratory, 5, 1);
    EXPECT_EQ(laboratory_5_1.Res(), 10);
}


TEST(FunctionsTests, Test7) {
    LessonTime practices_4_777 = LessonTime(Practices, 4, 777);
    EXPECT_EQ(practices_4_777.Res(), 3108);
}
TEST(FunctionsTests, Test8) {
    LessonTime practices_2_5 = LessonTime(Practices, 2, 5);
    EXPECT_EQ(practices_2_5.Res(), 10);
}
TEST(FunctionsTests, Test9) {
    LessonTime practices_6_7 = LessonTime(Practices, 6, 7);
    EXPECT_EQ(practices_6_7.Res(), 42);
}
