#include <iostream>
#include "Edge.cpp"

/**
	 * Esta classe representa uma aresta ponderada e direcionada
	 * Ela herda da classe {WeightedEdge}
	*/
template <class T>
class DirectionalAndWeightedEdge : public WeightedEdge
{
public:
	DirectionalAndWeightedEdge(Vertex<T> *v1, Vertex<T> *v2, int p_weight) : WeightedEdge(v1, v2, p_weight)
	{
	}

	/**
	 * Retorna todos os vertíces relacionados a esta aresta
	 * Este método sobrescreve o metodo nativo para retornar somente o nó de chegada do destino
	 * @return {Vertex<T>[]} O no de destino da direção
	*/
	Vertex<T>[] GetVertexesOfEdge()
	{
		Vertex<T> values[1] = {vertex2};
		return values;
	}

	private:
};