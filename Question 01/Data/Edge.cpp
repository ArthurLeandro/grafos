#include <iostream>
#include "Vertex.cpp"

/**
 * Classe que representa uma aresta
 * Essa classe é genérica para que possa ser construído o vertíce genérico 
 */
template <class T>
class Edge
{
public:
	Edge(Vertex<T> *v1, Vertex<T> *v2)
	{
		vertex1 = v1;
		vertex2 = v2;
	}

	/**
	 * Connecta dois vertíces formando assim uma aresta
	 * Sera virtual pois uma aresta ponderado deve sobrescrever este método para criar o peso antes de conectar	 
	 * @param v1 vertíce de onde está surgindo
	 * @param v2 vertíce para onde está indo
	 * @return {Edge} Conexão concluída
	*/
	virtual Edge *Connect(Vertex<T> *v1, Vertex<T> *v2)
	{
		Edge *newEdge = new Edge(v1, v2);
		return (newEdge != nullptr) ? newEdge : nullptr;
	}

	/**
	 * Retorna os vertíces relacionados de uma aresta 
	 * Sera virtual pois uma aresta direcionado deve sobrescrever este método para retornar somente o vertíce de destino  
	 * @param v1 vertíce de onde está surgindo
	 * @param v2 vertíce para onde está indo
	 * @return {Vertex<T>[]} Todos os vertíces relacionados dentro dessa aresta 
	*/
	virtual Vertex<T>[] GetVertexesOfEdge()
	{
		Vertex<T> values[2] = {vertex1, vertex2};
		return values;
	}

	private :
		Vertex<T> *vertex1; //Vertíce de onde está surgindo
		Vertex<T> *vertex2; //Vertíce de onde está indo
};