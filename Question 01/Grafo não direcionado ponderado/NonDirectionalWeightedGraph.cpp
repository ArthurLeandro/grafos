#include <iostream>
#include <cstdlib>
#include <list>
#include "../Data/Vertex.cpp"
#include "../Data/WeightedEdge.cpp"

template <class T>
class NonDirectionalWeightedGraph
{
public:
	NonDirectionalWeightedGraph()
	{
	}

private:
	list<WeightedEdge<T>> edges;
	list<Vertex<T>> vertices;
};
