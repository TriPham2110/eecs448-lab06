#include "Test.h"
#include <string>
#include <iostream>

Test::Test(Queue q){
  this->q = q;
}

Test::~Test(){}

void Test::test_1(){
  std::cout<<"Default constructor should create empty queue. ";
  if(q.isEmpty()){
    std::cout<<"Test passed\n\n";
  }
  else{
    std::cout<<"Test failed\n\n";
  }
}

void Test::test_2(){
  q.enqueue(5);
  std::cout<<"Enqueue one item should make queue non-empty. ";
  if(!q.isEmpty()){
    std::cout<<"Test passed\n\n";
  }
  else{
    std::cout<<"Test failed\n\n";
  }
  q.dequeue();
}

void Test::test_3(){
  q.enqueue(5);
  std::cout<<"Enqueuing one item and peekFront should return that same item. ";
  if(q.peekFront() == 5){
    std::cout<<"Test passed\n\n";
  }
  else{
    std::cout<<"Test failed\n\n";
  }
  q.dequeue();
}

void Test::test_4(){
  q.enqueue(5);
  q.dequeue();
  std::cout<<"Enqueuing one item and then dequeuing should return an empty queue. ";
  if(q.isEmpty()){
    std::cout<<"Test passed\n\n";
  }
  else{
    std::cout<<"Test failed\n\n";
  }
}

void Test::test_5(){
  for(int i=5; i<10; i++){
    q.enqueue(i);
  }
  q.dequeue();
  std::cout<<"peekFront should only peek at the front. ";
  if(q.peekFront() == 6){
    std::cout<<"Test passed\n\n";
  }
  else{
    std::cout<<"Test failed\n\n";
  }
  for(int i=6; i<10; i++){
    q.dequeue();
  }
}

void Test::test_6(){
  std::cout<<"peekFront should throw runtime_error on an empty queue. ";
  try{
    q.peekFront();
    std::cout<<"Test failed\n\n";
  }
  catch(...){
    std::cout<<"Test passed\n\n";
  }
}

void Test::test_7(){
  std::cout<<"dequeue should throw runtime_error on an empty queue. ";
  try{
    q.dequeue();
    std::cout<<"Test failed\n\n";
  }
  catch(...){
    std::cout<<"Test passed\n\n";
  }
}

void Test::test_8(){
  q.enqueue(5);
  q.enqueue(6);
  q.dequeue();
  std::cout<<"dequeue should remove the front of the queue. ";
  if(q.peekFront() == 6){
    std::cout<<"Test passed\n\n";
  }
  else{
    std::cout<<"Test failed\n\n";
  }
  q.dequeue();
}

void Test::test_9(){
  q.enqueue(5);
  q.enqueue(6);
  q.enqueue(7);
  q.dequeue();
  q.dequeue();
  std::cout<<"enqueued 5, 6, 7 and dequeued twice; peekFront returns: "<<q.peekFront()<<". ";
  if(q.peekFront() == 7){
    std::cout<<"Test passed (since peekFront returned 7)\n\n";
  }
  else{
    std::cout<<"Test failed (since peekFront did not return 7)\n\n";
  }
  q.dequeue();
}

void Test::execute(){
  std::cout<<"Queue tester starts: \n\n";
  test_1();
  test_2();
  test_3();
  test_4();
  test_5();
  test_6();
  test_7();
  test_8();
  test_9();
}
