#include <iostream>

struct Data
{
	void *(*getValue)(void *);
};