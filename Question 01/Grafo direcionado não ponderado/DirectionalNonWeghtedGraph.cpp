#include <iostream>
#include <cstdlib>
#include <list>
#include "../Data/Vertex.cpp"
#include "../Data/DirectionalEdge.cpp"

template <class T>
class DirectionalNonWeightedGraph
{
public:
	DirectionalNonWeightedGraph()
	{
	}

private:
	list<DirectionalEdge<T>> edges;
	list<Vertex<T>> vertices;
};
