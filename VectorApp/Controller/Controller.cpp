//
//  Controller.cpp
//  VectorApp
//
//  Created by Mills, Jenna on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>

void Controller :: start()
{
}
void Controller :: playWithVector()
{
    vector<int> intVector;
    
    for (int i = 0; i < 5; ++i)
    {
        intVector.push_back(i);
    }
    for (auto i = intVector.begin(); i != intVector.end(); ++i)
    {
        cout << *i << endl;
    }
}

void Controller :: wordsVector()
{
    vector<string> wordVector;
    wordVector.push_back("t");
    wordVector.push_back("e");
    wordVector.push_back("r");
    wordVector.push_back("c");
    wordVector.push_back("e");
    wordVector.push_back("s");
    wordVector.push_back("a");
    wordVector.push_back("is");
    wordVector.push_back("this");
    
    for (auto i = wordVector.begin(); i != wordVector.end(); ++i)
    {
        cout <<  *i << endl;
    }
}
