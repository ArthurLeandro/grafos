#include <iostream>
#include "Vertex.cpp"

class Edge
{
public:
	Edge(Vertex *v1, Vertex *v2)
	{
		vertex1 = v1;
		vertex2 = v2;
	}

	Edge *Connect(Vertex *v1, Vertex *v2)
	{
		Edge *newEdge = new Edge(v1, v2);
		return (newEdge != NULL) ? newEdge : NULL;
	}

private:
	Vertex *vertex1;
	Vertex *vertex2;
};