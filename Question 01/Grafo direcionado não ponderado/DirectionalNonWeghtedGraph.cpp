#include <iostream>
#include <cstdlib>
#include <list>
#include "../Data/Graph.cpp"
#include "../Data/DirectionalEdge.cpp"

/**
	 * Esta classe representa um grafo direcionado não ponderado
 	* Esta classe herda da classe {Graph}
	*/
template <class T>
class DirectionalNonWeightedGraph : public Graph
{
public:
	DirectionalNonWeightedGraph()
	{
	}

private:
	list<DirectionalEdge<T>> edges; // todos as arestas  direcionadas
};
