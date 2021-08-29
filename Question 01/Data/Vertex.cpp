#include <iostream>
using namespace std;

/**
 * Classe que representa um vértice de um grafo 
 * Esta classe é genérica portanto o valor de {Data} é definido somente na main
*/
template <class Data>
class Vertex
{
public:
	/**
	 * Retorna o valor dentro desse vertíce
	 * @returns {Data}  Tipo genérico dentro desse vertíce
	*/
	Data GetData()
	{
		return m_data;
	}

	/**
	 * Atribui um  valor para este vertíce
	 * @param {Data}  parâmetro a ser setado
	 */
	void SetData(Data p_data)
	{
		m_data = p_data;
	}

private:
	Data m_data;
};