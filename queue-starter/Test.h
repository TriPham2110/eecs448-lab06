#ifndef TEST_H
#define TEST_H

#include "Queue.h"

class Test{
  public:
    Test(Queue q);
    ~Test();
    void test_1();
    void test_2();
    void test_3();
    void test_4();
    void test_5();
    void test_6();
    void test_7();
    void test_8();
    void test_9();
    void execute();
  private:
    Queue q;
};
#endif
