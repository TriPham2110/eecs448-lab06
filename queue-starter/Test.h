#ifndef TEST_H
#define TEST_H

#include "Queue.h"

class Test{
  public:
    Test();
    ~Test();
    void test_isEmpty(Queue q);
    void test_enqueue(Queue q, int num);
    void test_dequeue(Queue q);
    void test_peekFront(Queue q, int num);
  private:
    Queue testQueue;
};
#endif
