#include "pch.h"
#include "Functions.h"

TEST(FibonacciTest, CorrectNumbers) {
	EXPECT_EQ(Fibonacci(0), 0);
	EXPECT_EQ(Fibonacci(1), 1);
	EXPECT_EQ(Fibonacci(2), 1);
	EXPECT_EQ(Fibonacci(3), 2);
	EXPECT_EQ(Fibonacci(6), 8);
	EXPECT_EQ(Fibonacci(10), 55);
	EXPECT_TRUE(true);
}

TEST(DecimalToBase, ConvertToBase) {
	EXPECT_EQ(decimalToBase(205, 2), "11001101");
	EXPECT_EQ(decimalToBase(205, 3), "21121");
	EXPECT_EQ(decimalToBase(205, 4), "3031");
	EXPECT_EQ(decimalToBase(512, 5), "4022");
	EXPECT_EQ(decimalToBase(512, 6), "2212");
	EXPECT_EQ(decimalToBase(512, 7), "1331");
	EXPECT_EQ(decimalToBase(512, 8), "1000");
	EXPECT_EQ(decimalToBase(862, 9), "1157");
	EXPECT_EQ(decimalToBase(862, 11), "714");
	EXPECT_EQ(decimalToBase(862, 12), "5BA");
	EXPECT_EQ(decimalToBase(862, 13), "514");
	EXPECT_EQ(decimalToBase(1279, 14), "675");
	EXPECT_EQ(decimalToBase(1279, 15), "5A4");
	EXPECT_EQ(decimalToBase(1279, 16), "4FF");
}