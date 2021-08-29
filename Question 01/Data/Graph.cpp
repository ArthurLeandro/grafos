#include <iostream>
#include <cstdlib>
#include <list>
#include "Edge.cpp"
#include "Vertex.cpp"

template <class T>
class Graph
{
public:
	Graph()
	{
	}

private:
	list<Edge<T>> edges;
	list<Vertex<T>> vertices;
};
