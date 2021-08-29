#include <iostream>
#include "Edge.cpp"

template <class T>
class DirectionalEdge : public Edge
{
public:
	DirectionalEdge(Vertex<T> *v1, Vertex<T> *v2, int p_weight) : Edge(v1, v2)
	{
	}

	Vertex<T>[] GetVertexesOfEdge()
	{
		Vertex<T> values[1] = {vertex2};
		return values;
	}

	private:
};