#include <iostream>
#include "Edge.cpp"

template <class T>
class DirectionalAndWeightedEdge : public WeightedEdge
{
public:
	DirectionalAndWeightedEdge(Vertex<T> *v1, Vertex<T> *v2, int p_weight) : WeightedEdge(v1, v2, p_weight)
	{
	}

	Vertex<T>[] GetVertexesOfEdge()
	{
		Vertex<T> values[1] = {vertex2};
		return values;
	}

private:
};