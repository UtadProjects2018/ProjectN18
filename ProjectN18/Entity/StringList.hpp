//
//  StringList.hpp
//  ProjectN18
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef StringList_hpp
#define StringList_hpp

#include <stdio.h>
#include "ITListable.hpp"

class StringList : public ITListable
{
public:

    StringList(const char* element);
    ~StringList();
    void ElementDescription() const;
    const char *GetElement();
private:
    const char *m_element;
};


#endif /* StringList_hpp */
