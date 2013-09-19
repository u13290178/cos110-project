/* 
 * File:   Map.cpp
 * Author: d-savant
 * 
 * Created on 19 September 2013, 11:41 AM
 */

#include "Map.h"

Map::Map(int w, int h) {
    width = w;
    height = h;
}

Map::Map(const Map& orig) {
}

Map::~Map() {
    width = 0;
    height = 0;
}

