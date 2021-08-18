#include <iostream>
#include "Data.cpp"
using namespace std;
class Vertex
{
public:
	int GetData()
	{
		return (int)m_data.getValue(NULL);
	}

	Data GetDataStruct()
	{
		return m_data;
	}

private:
	Data m_data;
};