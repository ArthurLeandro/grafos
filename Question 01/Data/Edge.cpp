#include <iostream>
#include "Vertex.cpp"

template <class T>
class Edge
{
public:
	Edge(Vertex<T> *v1, Vertex<T> *v2)
	{
		vertex1 = v1;
		vertex2 = v2;
	}

	Edge *Connect(Vertex<T> *v1, Vertex<T> *v2)
	{
		Edge *newEdge = new Edge(v1, v2);
		return (newEdge != nullptr) ? newEdge : nullptr;
	}

	virtual Vertex<T>[] GetVertexesOfEdge()
	{
		Vertex<T> values[2] = {vertex1, vertex2};
		return values;
	}

	private :
			// from
			Vertex<T> *vertex1,
			*vertex2; //to
};