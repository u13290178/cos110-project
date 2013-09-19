/* 
 * File:   Map.cpp
 * Author: d-savant
 * 
 * Created on 19 September 2013, 11:41 AM
 */

#include "Map.h"

Map::Map(string dir)
{
    
    cout << "Test: dir is " << dir << endl;
    
}

Map::Map(const Map& orig) {
}

Map::~Map() {
    width = 0;
    height = 0;
}

