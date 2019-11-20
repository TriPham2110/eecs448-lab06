#ifndef TEST_H
#define TEST_H

#include "Queue.h"

class Test{
  public:
    Test(Queue q);
    ~Test();
    void test_1(); //Default constructor should create empty queue
    void test_2(); //Default constructor should create empty queue
    void test_3(); //Enqueuing one item and peekFront should return that same item
    void test_4(); //Enqueuing one item and then dequeuing should return an empty queue
    void test_5(); //peekFront should only peek at the front
    void test_6(); //peekFront should throw runtime_error on an empty queue
    void test_7(); //dequeue should throw runtime_error on an empty queue
    void test_8(); //dequeue should remove the front of the queue
    void test_9(); //peekFront should only peek at the front 2.0
    void execute(); //run all tests
  private:
    Queue q;
};
#endif
