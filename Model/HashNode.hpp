//
//  HashNode.hpp
//  Nodes
//
//  Created by Thacker, Forrest on 5/9/16.
//  Copyright © 2016 Thacker, Forrest. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include <iostream>

namespace CTECData
{
    template <class Type>
    class HashNode
    {
    private:
        int key;
        Type value;
    public:
        HashNode(int key, const Type& value);
        int getKey();
        Type getValue();
    };
}

#endif /* HashNode_hpp */
