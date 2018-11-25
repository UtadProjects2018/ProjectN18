//
//  TFile.cpp
//  ProjectN10
//
//  Created by pc-laptop on 11/18/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "TList.hpp"

TListSystem::TList::TList()
{
    firstNode = nullptr;
    lastNode  = nullptr;
    selectedNode = nullptr;
    m_size = 0;
}

TListSystem::TList::~TList()
{
    delete firstNode;
    delete lastNode;
    
    firstNode = nullptr;
    lastNode  = nullptr;
    selectedNode = nullptr;
}

unsigned int TListSystem::TList::Size()
{
    return m_size;
}

unsigned int TListSystem::TList::Push(ITListable *psz)
{
    TNode *node;
    node = TListSystem::TList::Node();
    node->tlistData = psz;
    
    if(!lastNode)
    {
        firstNode = node;
        lastNode = node;
    }
    else
    {
        lastNode->nextNode = node;
        node->previousNode = lastNode;
        lastNode = node;
    }
    
    if (!selectedNode)
    {
        selectedNode = firstNode;
    }
    
    m_size++;
    
    return m_size;
}

const ITListable *TListSystem::TList::First()
{
    selectedNode = firstNode;
    return firstNode->tlistData;
}

const ITListable *TListSystem::TList::Next()
{
    if (selectedNode != lastNode)
    {
        selectedNode = selectedNode->nextNode;
    }
    return selectedNode->tlistData;
}

const ITListable *TListSystem::TList::Pop()
{
    if (m_size == 0)
    {
        firstNode = nullptr;
        lastNode  = nullptr;
        selectedNode = nullptr;
    }
    else if (m_size == 1)
    {
        firstNode = nullptr;
        lastNode  = nullptr;
        selectedNode = nullptr;
        m_size --;
    }
    else
    {
        lastNode = lastNode->previousNode;
        m_size --;
    }
    
    if (!lastNode)
    {
        return 0;
    }
    else
    {
        return lastNode->tlistData;
    }
}

void TListSystem::TList::Reset()
{
    for (int i = m_size; i > 0; i --)
    {
        Pop();
    }
}
