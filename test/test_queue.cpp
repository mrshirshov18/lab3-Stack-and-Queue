#include <gtest.h>
#include "Queue.h"
TEST(Queue, can_create_queue) {
	ASSERT_NO_THROW(Queue<double> x);
}

TEST(Queue, attemp_to_push) {
	Queue<bool> x;
	ASSERT_NO_THROW(x.push(true));
}

TEST(Queue, attemp_get_size) {
	Queue<double> x;
	x.push(2.41);
	x.push(2.41);
	x.push(2.41);
	x.push(2.41);
	EXPECT_EQ(4, x.size());
}

TEST(Queue, attemp_check_empty) {
	Queue<int> x;
	EXPECT_TRUE(x.empty());
}

TEST(Queue, throw_an_error_for_pop_if_queue_is_empty) {
	Queue<int> x;
	ASSERT_ANY_THROW(x.pop());
}

TEST(Queue, attemp_give_top_value) {
	Queue<int> x;
	x.push(1);
	x.push(2);
	x.push(3);
	EXPECT_EQ(1, x.top());
}

TEST(Queue, throw_an_error_for_top_if_queue_is_empty) {
	Queue<int>x;
	ASSERT_ANY_THROW(x.top());
}

TEST(Queue, attempt_to_run) {
	Queue<int>x;
	x.push(1);
	x.push(2);
	x.push(3);
	x.pop();
	x.pop();
	x.pop();
	x.push(4);
	x.push(5);
	x.push(6);
	x.pop();
	x.pop();
	x.push(7);
	x.push(8);
	x.push(9);
	EXPECT_EQ(4, x.size());
}
TEST(Queue, check_newsize) {
	Queue<int> queue;
	queue.push(1);
	queue.push(2);
	queue.push(3);
	queue.push(4);
	queue.pop();
	queue.pop();
	queue.push(5);
	queue.push(6);
	queue.push(7);
	queue.push(8);
	queue.push(9);
	EXPECT_EQ(3, queue.top());
}