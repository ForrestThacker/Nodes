//
//  CTECGraph.cpp
//  Nodes
//
//  Created by Thacker, Forrest on 4/25/16.
//  Copyright © 2016 Thacker, Forrest. All rights reserved.
//

#include "CTECGraph.hpp"

using namespace CTECData;

template <class Type>
const int CTECGraph<Type> :: MAXIMUM;

template <class Type>
void CTECGraph<Type> :: addVertex(const Type& value)
{
    assert(size() < MAXIMUM);
    int newVertexNumber = manyVertices;
    manyVertices++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < manyVertices; otherVertexNumber(++)
    {
        adjacencyMatrix[otherVertexNumber] [newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber] [newVertexNumber] = false;
    }
    
    labels[newVertexNumber = value];
}

template <class Type>
void CTECGraph<Type> :: addEdge(int source, int target)
{
    assert(source < size() && target < size());
    adjacencyMatrix[source] [target] = true;
}

template <class Type>
bool CTECGraph<Type> :: isEdge(int source, int target) const
{
    assert(source < size() && target < size());
    
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source] [target];
    
    return isAnEdge;
}

template <class Type>
Type& CTECGraph<Type> :: operator[] (int vertex) const
{
    assert(vertex < size());
    return labels[vertex];
}

template <class Type>
        std::set<int> CTECGraph<Type> :: neighbors(int vertex) const
    {
        assert(vertex < size());
        std::set<int> vertexNeighbors;
        
        for( index= 0; index < size(); index++)
            if(adjacencyMatrix [vertex] [index])
            {
                vertexNeighbors.insert(index);
            }
        
    }
        return vertexNeighbors;
    }
        
template <class Type>
        void CTECGraph<Type> :: removeEdge(int source, <#int target#>)
    {
        assert(source < size() && arget <size());
        adjacencyMatrix[source] [target] = false;
    }



template<class Type>
        void CTECGraph<Type> :: removeEdge(int source, int target)
    {
        assert(source < size() && target <size());
        adjacencyMatrix[source] [target] = false;
    }

template<class Type>
        void CTECGraph<Type> :: depthFirstTraversal(CTECGraph<Type> currentGraph, int vertex)
    {
        bool markedVertices[MAXIMUM];
        assert(vertex(vertex < currentGraph.size()):
               std::fill_(markedVertices, currentGraph.size.size(), false);
               depthFirstTraversal(currentGraph, vertex, markedVertices);
    }

template<class Type>
               void CTECGraph<Type> :: depthFirstTraversal(CTECGraph<Type> currentGraph, int vertex, bool * markedVertices)
        {
            std::set<int> connections = currentGraph.neighbors(vertex);
            std::set<int>:: iterator setIterator;
            
            markedVertices[vertex] = ture;
            cout << currentGraph[vertex] << endl;
            
            for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
            {
                if(!markedVertices[*setIterator])
                {
                    depthFirstTraversal(currentGraph, *setIterotr, markedVertices);
                }
            }
        }

template <class Type>
               void CTECGraph<Type> :: breadthFirstTraversal(CTECGRaph<Type> currentGraph, int vertex)
        {
            bool markedVertices[MAXIMUM];
            std::set<int> connections;
            std:: set<int>:: iterator set Iterator;
            std::queue<int> vertexQueue;
            assert(vertex < currentGraph.size());
            
            std::fill_n(markedVertices,currentGraph.size(), false);
            markedVertices[vertex] = ture;
            cout<< currentGraph[vertex] << endl;
            vertexQueue.push(vertex);
            while (!vertexQueue.empty())
            {
                connections = currentGraph.neighbors(vertexQueue.front());
                vertexQueue.pop();
                
                for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
                {
                    if(!markedvertices[*setIterator])
                    {
                        markedVertices[*setIterator] = true;
                        cout << currentGraph[*setIterator] << endl;
                        vertexQueue.push(*setIterator);
                    }
                }
            }
        }