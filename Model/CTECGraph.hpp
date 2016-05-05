//
//  CTECGraph.hpp
//  Nodes
//
//  Created by Thacker, Forrest on 4/25/16.
//  Copyright © 2016 Thacker, Forrest. All rights reserved.
//

#ifndef CTECGraph_hpp
#define CTECGraph_hpp
#include <set>

namespace CTECData
{
    template <class Type>
    class CTECGraph
    {
    private:
        static const int MAXIMUM = 20;
        bool adjacencyMatrix [MAXIMUM] [MAXIMUM];
        Type labels[MAXIMUM];
        int manyVertices;
    public:
        CTECGraph();
        ~CTECGraph();
        
        void addVertex(const Type& value);
        void addEdge(int source, int target);
        void removeEdge(int source, int target);
        Type& operator [] (int vertex);
        Type operator [] (int vertex) const;
        int size()const;
        bool isEdge(int source, int target)const;
        std::set<int> neighbors(int vertex) const;
        void depthFitTraversal(CtecGraph<Type> graph, int index)
        
        
        
        
    };
}

#include <stdio.h>

#endif /* CTECGraph_hpp */
