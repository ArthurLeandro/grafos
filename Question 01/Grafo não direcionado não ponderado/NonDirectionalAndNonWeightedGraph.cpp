#include <iostream>
#include <cstdlib>
#include <list>
#include "../Data/Vertex.cpp"
#include "../Data/Edge.cpp"

template <class T>
class NonDirectionalAndNonWeightedGraph
{
public:
	NonDirectionalAndNonWeightedGraph()
	{
	}

private:
	list<Edge<T>> edges;
	list<Vertex<T>> vertices;
};
