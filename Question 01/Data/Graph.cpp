#include <iostream>
#include <cstdlib>
#include "Edge.cpp"
#include "Vertex.cpp"

class Graph
{
public:
	Graph()
	{
		a_edges = (Edge *)malloc(sizeof(Edge));
		a_vertices = (Vertex *)malloc(sizeof(Vertex));
	}
	Edge *GetEdges()
	{
		return a_edges;
	}

	Vertex *GetVertex()
	{
		return a_vertices;
	}

	Vertex GetVertex(int p_pos)
	{
		return (a_vertices[p_pos]);
	}

private:
	Edge *a_edges;
	Vertex *a_vertices;
	int m_amountOfEdges;
	int m_amountOfVertices;
};