#include <iostream>
using namespace std;

template <class Data>
class Vertex
{
public:
	Data GetData()
	{
		return m_data;
	}

	void SetData(Data p_data)
	{
		m_data = p_data;
	}

private:
	Data m_data;
};