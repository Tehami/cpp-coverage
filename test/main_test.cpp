#include "gtest/gtest.h"
#include "../src/main.cpp"

TEST(TriangleTest,EquilateralTriangle){
EXPECT_EQ("equilateral",triangle(2,2,2));
};
TEST(TriangleTest,IsoscelesTriangle){
EXPECT_EQ("isosceles",triangle(2,2,3));
};
TEST(TriangleTest,ScaleneTriangle){
EXPECT_EQ("scalene",triangle(1,2,3));
};
int main(int argc,char**argv)
{
testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

