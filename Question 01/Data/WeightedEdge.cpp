#include <iostream>
#include "Edge.cpp"

/**
	 * Representa uma aresta ponderada
	 * Esta classe herda da classe base {Edge}
	*/
template <class T>
class WeightedEdge : public Edge
{
public:
	WeightedEdge(Vertex<T> *v1, Vertex<T> *v2, int p_weight) : Edge(v1, v2)
	{
		SetWeigth(p_weight);
	}

	/**
	 * Atribui o valor para o peso
	 * @param p_weight valor a ser atribuído ao peso
	*/
	void SetWeight(int p_weight)
	{
		m_weight = p_weight;
	}

	/**
	 * Retorna o valor do peso desta aresta
	 * @return {int} Valor do Peso
	*/
	int GetWeight()
	{
		return m_weight;
	}

	/**
	 * Connecta dois vertíces formando assim uma aresta, e sobrescreve o método nativo dando um peso base para a conexão
	 * @param v1 vertíce de onde está surgindo
	 * @param v2 vertíce para onde está indo
	 * @return {Edge*} Conexão concluída
	*/
	Edge *Connect(Vertex<T> *v1, Vertex<T> *v2)
	{
		SetWeight(0);
		Edge *newEdge = new Edge(v1, v2);
		return (newEdge != nullptr) ? newEdge : nullptr;
	}

private:
	int m_weight; // Peso da aresta
};