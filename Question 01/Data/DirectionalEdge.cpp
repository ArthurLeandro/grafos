#include <iostream>
#include "Edge.cpp"

/**
	 * Esta classe representa uma aresta direcionada
	 * Esta classe herda da classe {Edge}
	*/
template <class T>
class DirectionalEdge : public Edge
{
public:
	DirectionalEdge(Vertex<T> *v1, Vertex<T> *v2, int p_weight) : Edge(v1, v2)
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