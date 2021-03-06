/*************************************************************************
EvalLabs.h
pfm, 2015, 2016

>>> SOURCE LICENSE >>>
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation (www.fsf.org); either version 2 of the
License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

A copy of the GNU General Public License is available at
http://www.fsf.org/licensing/licenses
>>> END OF LICENSE >>>
*************************************************************************/
#ifndef TSS_H
#define TSS_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>
#include <math.h>
#include <cfloat>
#include <vector>
#include <map>
#include "Symbol.h"

using namespace std;

class TSS {
public:
    int nbCat;
    std::vector<Symbol> data;
    TSS();
    TSS(const std::vector<Symbol> &vs);

    std::map<int,int> getLabels();
    void saveFile(std::string file);
    static TSS loadFile(std::string &fname);
    static TSS loadFileSVMPrediction(std::string &filename);
    void print();
    };

#endif
