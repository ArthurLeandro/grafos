#include <iostream>
#include <cstdlib>
#include <list>
#include "../Data/Vertex.cpp"
#include "../Data/DirectionalAndWeightedEdge.cpp"

/**
 * Esta classe representa um grafo direcional e ponderado 
 * Esta classe herda da classe {Graph}
*/
template <class T>
class DirectionalAndWeightedGraph
{
public:
	DirectionalAndWeightedGraph()
	{
	}

private:
	list<DirectionalAndWeightedEdge<T>> edges; //todas as arestas direcionadas e ponderadas
};
