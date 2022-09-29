
#include "CGraph.h"


CGraph::CGraph() : m_iGraphType(0)
{
}

CGraph::CGraph(int iGraphType) :  m_iGraphType(iGraphType)
{
}

int CGraph::GetGraphType()
{
	return m_iGraphType;
}
