#include <gtest.h>
#include "Stack.h"
TEST(Stack, attemp_create_queue) {
	ASSERT_NO_THROW(Stack<double> x);
}

TEST(Stack, attemp_create_conversion_constructor) {
	ASSERT_NO_THROW(Stack<double> x(5.2));
}

TEST(Stack, attemp_to_push) {
	Stack<int> x;
	ASSERT_NO_THROW(x.push(4));
}
TEST(Stack, attemp_get_size) {
	Stack<int>x;
	x.push(1);
	x.push(1);
	x.push(1);
	EXPECT_EQ(3, x.size());
}
TEST(Stack, attemp_check_empty) {
	Stack<int>x;
	EXPECT_TRUE(x.empty());
}
TEST(Stack, throw_an_error_for_pop_if_stack_is_empty) {
	Stack<int>x;
	ASSERT_ANY_THROW(x.pop());
}
TEST(Stack, attemp_give_top_value) {
	Stack<int>x(1);
	x.push(2);
	x.push(3);
	EXPECT_EQ(3, x.top());
}

TEST(Stack, attemp_test_a_lot_of_action) {
	Stack<int>x(1);
	for (int i = 1; i < 21; i++) {
		x.push(i);
	}
	for (int i = 20; i > 0; i--) {
		EXPECT_EQ(x.top(), i);
		x.pop();
	}
}