/* 
 * File:   Map.h
 * Author: d-savant
 *
 * Created on 19 September 2013, 11:41 AM
 */

#ifndef MAP_H
#define	MAP_H

#include <string>
#include "Game.h"

using namespace std;

class Map {
public:
    Map(string dir); // receives dir of map to load.
    Map(const Map& orig);
    virtual ~Map();
private:
    int width, height;
    char ** piece;
    
};

#endif	/* MAP_H */

