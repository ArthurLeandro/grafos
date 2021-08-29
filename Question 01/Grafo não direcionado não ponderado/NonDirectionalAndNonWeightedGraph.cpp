#include <iostream>
#include <cstdlib>
#include <list>
#include "../Data/Graph.cpp"
#include "../Data/Edge.cpp"

/**
 * Esta classe representa um grafo não direcional e não ponderado
 * Esta classe herda da classe {Graph}
*/
template <class T>
class NonDirectionalAndNonWeightedGraph : public Graph
{
public:
	NonDirectionalAndNonWeightedGraph()
	{
	}

private:
	list<Edge<T>> edges; // todos as arestas nao direcionadas e nao ponderadas
};
