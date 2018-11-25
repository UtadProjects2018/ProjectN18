//
//  IntList.cpp
//  ProjectN18
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "IntList.hpp"

IntList::IntList(const int elementNumber)
{
    this->m_element = elementNumber;
}

IntList::~IntList()
{
    m_element = 0;
}

void IntList::ElementDescription() const
{
    printf("%d\n", m_element);
}

const int IntList::GetElement()
{
    return m_element;
}
