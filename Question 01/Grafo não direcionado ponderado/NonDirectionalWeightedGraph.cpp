#include <iostream>
#include <cstdlib>
#include <list>
#include "../Data/Graph.cpp"
#include "../Data/WeightedEdge.cpp"

/**
 * Esta classe representa um grafo não direcional e ponderado de
 * Esta classe herda da classe {Graph}
*/
template <class T>
class NonDirectionalWeightedGraph : public Graph
{
public:
	NonDirectionalWeightedGraph()
	{
	}

private:
	list<WeightedEdge<T>> edges; //todos as arestas ponderadas do grafo
};
