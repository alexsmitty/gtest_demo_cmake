#include "gtest/gtest.h"

#include "functions.h"

TEST(Functions, getHelloWorld){
    EXPECT_EQ("Hello World", getHelloWorldString());
}

TEST(Functions, sumWithInts){
    int result = sum<int>(1, 2);

    EXPECT_EQ(result, 3);
}

TEST(Functions, sumWithDoubles){
    double actualResult;
    double expectedResult = 3.4;

    actualResult = sum<double>(1.2, 2.2);

    EXPECT_DOUBLE_EQ(actualResult, expectedResult);
}
