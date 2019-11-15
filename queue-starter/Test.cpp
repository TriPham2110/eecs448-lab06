#include "Test.h"
#include <string>
#include <iostream>

Test::Test(){}

Test::~Test(){}

void Test::test_isEmpty(Queue q){
  if(q.isEmpty()){
    std::cout<<"Queue is empty\n";
  }
  else{
    std::cout<<"Queue is not empty\n";
  }
}

void Test::test_enqueue(Queue q, int num){
  q.enqueue(num);
  if(q.isEmpty()){
    std::cout<<"This should not be the case\n";
  }
  else{
    std::cout<<"Enqueuing a value makes queue not empty\n";
  }
  if(q.peekFront() == num){
    std::cout<<"Enqueue "<<num<<" on empty queue works\n";
  }
  else{
    std::cout<<"Queue currently has more than one element\n";
  }
}

void Test::test_dequeue(Queue q){
  q.dequeue();
  if(q.isEmpty()){
    std::cout<<"Queue previously had one element so it should be empty after dequeuing\n";
  }
  else{
    std::cout<<"Queue previously had more than one element so it is not empty after dequeuing\n";
  }
}

void Test::test_peekFront(Queue q, int num){
  if(q.peekFront() == num){
    std::cout<<"peekFront method works when enqueuing the first element "<<num<<"\n";
  }
  else{
    std::cout<<"Something is off here\n";
  }
}
