//
//  TFile.hpp
//  ProjectN10
//
//  Created by pc-laptop on 11/18/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef TFile_hpp
#define TFile_hpp

#include <stdio.h>
#include "ITListable.hpp"

namespace TListSystem
{
    class TList
    {
        
    public:
        TList();
        ~TList();
        
        unsigned int Size();
        unsigned int Push(ITListable *psz);
        
        const ITListable *First(); 
        const ITListable *Next();
        const ITListable *Pop();
        
        void Reset();
        
    private:
        unsigned int m_size;
        class TNode
        {
        public:
            ITListable *tlistData;
            TNode *nextNode, *previousNode;
        } *firstNode, *lastNode, *selectedNode;
        
        TNode* Node()
        {
            TNode *pNode;
            pNode = new TNode();
            return pNode;
        }
    };
}
#endif /* TFile_hpp */
