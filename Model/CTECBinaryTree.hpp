//
//  CTECBinaryTree.hpp
//  Nodes
//
//  Created by Thacker, Forrest on 4/11/16.
//  Copyright © 2016 Thacker, Forrest. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include "TreeNode.hpp"
namespace CTECData
{
template <class Type>
    class CTECBinaryTree
    {
    private:
        void calculateSize(TreeNode,Type> * currentNode);
        int size;
        TreeNode<Type> * root;
        int height;
        bool balanced;
        bool contains(Type value, CTECBinaryTree <Type> * currentTree);
        TreeNode<Type> * getRightMostChild(CTECBinaryTree<Type> leftsubTree;
        TreeNode<Type> * getLeftMostChild(CTEinaryTree<Type> rightsubTree);
    public:
        CTECBinaryTree();
        ~CTECBinaryTree();
        bool insert( const Type & value);
        Type remove(const Type& value);
        bool contains(Type value);
        int getSize();
        int getHeight();
        bool isBalanced();
        TreeNode<Type> * getRoot();
        void preorderTraversal(CTECBinaryTree <Type> * currentNode);
        void inorderTraversal(CTECBinaryTree <Type> * currentNode);
        void postorderTraversal(CTECBinaryTree <Type> * currentNode);
    };
    
}
#endif /* CTECBinaryTree_hpp */
