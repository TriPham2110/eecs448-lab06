/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "Test.h"

int main()
{
	Queue q;
	Test t;
	t.test_isEmpty(q);
	t.test_enqueue(q,5);
	t.test_dequeue(q);

	return(0);
}
