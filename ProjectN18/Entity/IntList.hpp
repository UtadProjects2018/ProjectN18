//
//  IntList.hpp
//  ProjectN18
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef IntList_hpp
#define IntList_hpp

#include <stdio.h>
#include "StringList.hpp"

class IntList : public ITListable
{
public:
    
    IntList(const int elementNumber);
    ~IntList();
    void ElementDescription() const;
    const int GetElement();
private:
    int m_element;
};

#endif /* IntList_hpp */
