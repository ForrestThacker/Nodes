//
//  CTECBinaryTree.cpp
//  Nodes
//
//  Created by Thacker, Forrest on 4/11/16.
//  Copyright © 2016 Thacker, Forrest. All rights reserved.
//

#include "CTECBinaryTree.hpp"
using namespace CTECData;
using namespace std;

template <class Type>
CTECBinaryTree<Type :: CTECBinaryTree()
{
    rhis->root = nullptr;
    this-size = 0;
    this-height = 0;
    this-baanced = true;
}

template <class Type>
int CTECBinaryTree<Type> :: getSize()
{
    size = 0;
    size = calcuateSize(root);
    return size;
}

template <class Type>
int CTECBinaryTree<Type> :: calcuateSize(TreeNode<Type * currentNode)
{
    if(currentNode != nullptr)
    {
        calculateSize(currentNode->GetLeftChild());
        calculateSize(currentNode->GetRigtChild());
        size++;
    }
}

template <class Type>
TreeNode,Type * CTECBinaryTree<Type> :: getRoot();
template <class Type>
void CTECBinaryTree<Type> :: preorderTraversal(TreeNode<Type> * currentNode);
{
    if(currentNode != nullptr)
    {
        cout << currentNode_>getValue() << " " ;
        preorderTraversal(currentNode->getLeftChild());
        preorderTraversal(currentNode->RightChild());
        
        
    }
}
        
template <class Type>
void CTECBinaryTree<Type> :: preorderTraversal(TreeNode<Type> * currentNode);
        
            if(currentNode != nullptr)
        {
                
            inorderTraversal(currentNode->getLeftChild());
            cout << currentNode_>getValue() << " " ;
            inorderTraversal(currentNode->RightChild());
                
                
        }
}

template <class Type>
void CTECBinaryTree<Type> :: preorderTraversal(TreeNode<Type> * currentNode);
    {
        if(currentNode != nullptr)
        {
            postorderTraversal(currentNode->getLeftChild());
            postorderTraversal(currentNode->RightChild());
            cout << currentNode_>getValue() << " " ;
        }
    }
template <clas Type>
        bool CTECBinryTree<Type> :: contains(Type value)
        {
            bool isInTree = false;
            
            if(root != nullptr)
            {
                if(root_>getValue() == value)
                {
                    isInTree = true;
                }
                else
                {
                    if(value < root ->getValue()
                       {
                           isInTree = contains(value, root_>getLeftChild());
                       }
                       else
                       {
                           i8sInTree = contains(value, root->getRightChild());
                       }
                }
            }
            return isInTree;
        }
template <class Type>
            bool CTECBinaryTree,Type> :: contains(Type value, CTECBinaryTree<Type * currentTree)
                    {
                        bool isInTree = false;
                        
                        if(currentTree != nullptr)
                        {
                            if(currentTree->getRoot()->getValue() == value)
                            {
                                isInTree = true;
                            }
                            else
                                if(value < root ->getValue()
                                   {
                                       isInTree = contains(value, root_>getLeftChild());
                                   }
                                   else
                                   {
                                       isInTree = contains(value, root->getRightChild());
                                   }
                            }
                    }
                    
                    return isInTree;

            }




















