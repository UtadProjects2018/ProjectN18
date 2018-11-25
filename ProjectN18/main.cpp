//
//  main.cpp
//  ProjectN10
//
//  Created by pc-laptop on 11/18/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include <iostream>

#include "IntList.hpp"
#include "StringList.hpp"
#include "TList.hpp"

int main(int argc, const char * argv[])
{
    StringList *swift = new StringList("Swift");
    StringList *cpp = new StringList("c++");
    IntList *swiftAge = new IntList(4);
    IntList *cppAge = new IntList(35);
    
    TListSystem::TList languages;
    
    languages.Push(swift);
    languages.Push(cpp);
    languages.Push(swiftAge);
    languages.Push(cppAge);
    
    for (int i = 0; i < languages.Size() ; i++)
    {
        if (i == 0)
        {
            languages.First()->ElementDescription();
        }
        else
        {
            languages.Next()->ElementDescription();
        }
    }
    
    return 0;
}
