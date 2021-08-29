#include <iostream>
#include "Edge.cpp"

template <class T>
class WeightedEdge : public Edge
{
public:
	WeightedEdge(Vertex<T> *v1, Vertex<T> *v2, int p_weight) : Edge(v1, v2)
	{
		SetWeigth(p_weight);
	}

	void SetWeight(int p_weight)
	{
		m_weight = p_weight;
	}

	int GetWeight()
	{
		return m_weight;
	}

private:
	int m_weight;
};