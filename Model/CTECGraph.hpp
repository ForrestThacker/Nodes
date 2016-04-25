//
//  CTECGraph.hpp
//  Nodes
//
//  Created by Thacker, Forrest on 4/25/16.
//  Copyright © 2016 Thacker, Forrest. All rights reserved.
//

#ifndef CTECGraph_hpp
#define CTECGraph_hpp

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
        
        
    };
}

#include <stdio.h>

#endif /* CTECGraph_hpp */
