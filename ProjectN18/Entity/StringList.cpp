//
//  StringList.cpp
//  ProjectN18
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "StringList.hpp"

StringList::StringList(const char * element)
{
    this->m_element = element;
}

StringList::~StringList()
{
    delete m_element;
    m_element = nullptr;
}

void StringList::ElementDescription() const
{
    printf("%s\n", m_element);
}

const char *StringList::GetElement()
{
    return m_element;
}
