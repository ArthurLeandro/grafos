#include <iostream>
#include <cstdlib>
#include <list>
#include "Vertex.cpp"

/**
 * Esta classe representa um grafo sem nenhuma aresta
*/
template <class T>
class Graph
{
public:
	Graph()
	{
	}

private:
	list<Vertex<T>> vertices; // todos os vertíces do grafo
};
