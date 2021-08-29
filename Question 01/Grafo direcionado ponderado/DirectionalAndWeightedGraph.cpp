#include <iostream>
#include <cstdlib>
#include <list>
#include "../Data/Vertex.cpp"
#include "../Data/DirectionalAndWeightedEdge.cpp"

template <class T>
class DirectionalAndWeightedGraph
{
public:
	DirectionalAndWeightedGraph()
	{
	}

private:
	list<DirectionalAndWeightedEdge<T>> edges;
	list<Vertex<T>> vertices;
};
