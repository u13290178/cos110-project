/* 
 * File:   Game.h
 * Author: d-savant
 *
 * Created on 17 September 2013, 5:03 PM
 */

#ifndef GAME_H
#define	GAME_H

#include <vector>
#include <iostream>
#include <string>
#include "Messages.h"
#include <fstream>
#include <sstream>
#include "PieceType.h"

using namespace std;

class Game {
private:
    //map, player sprite, score
    


public:
    Game();
    Game(const Game& orig);
    virtual ~Game();
    void Init();
    
    void printMaps(vector<string>& names)
{
	Messages mess;
	
	getMaps(names);
	
	cout << mess.MAP_SELECT;
	for(int i = 0; i < names.size(); i++)
		cout << (i + 1) << ". " << names[i] << endl;
}

void getMaps(vector<string>& names)
{
	string dirs[3] = {"Maps/Easy/easy", "Maps/Medium/medium", "Maps/Hard/hard"};
	string end = ".txt";
	
	ifstream in;
	
	for(int i = 0; i < 3; i++)
	{
		int j = 1;
		while(true)
		{
			stringstream ss;
			ss << dirs[i];
			ss << j;
			ss << end;
			string map = ss.str();
			
			in.open(map.c_str());
			if(in.good())
			{
				in.close();
				names.push_back(map);
			}
			else
				break;
			
			j++;
		}
	}
}
/*
void printMap() const
{
	cout << " ";
	for(int i = 0; i < width; i++)
		cout << "-";
	cout << endl;
	
	for(int i = 0; i < height; i++)
	{
		cout << "|";
		for(int j = 0; j < width; j++)
		{
			if(level[j][i] == 0)
				cout << ".";
			else
			{
				//This call will depend on how you determine the type of a piece
				switch(level[j][i] type)
				{
					case BOULDER:
						cout << "B";
						break;
					case WALL:
						cout << "/";
						break;
					case WAYPOINT:
						//This call will depend on how you differentiate between a starting and ending waypoint
						cout << (Waypoint S or E);
						break;
					case CRITTER:
						cout << "C";
						break;
					case HAMMER:
						cout << "H";
						break;
					case HUNTER:
						//This call will depend on how you determine if a Hunter creep is stealthed or not
						if(Hunter is stealthed)
							cout << ".";
						else
							cout << "U";
						break;
					case RUNNER:
						cout << "R";
						break;
					case SLEEPER:
						cout << "Z";
						break;
					case ASSASSIN:
					case MAGE:
					case RANGER:
					case WARRIOR:
						//This call will depend on how you retrieve the currect facing direction of the sprite
						cout << (Sprite current facing direction);
						break;
				}
			}
		}
		cout << "|" << endl;
	}
	
	cout << " ";
	for(int i = 0; i < width; i++)
		cout << "-";
	cout << endl;
}
    */
};

#endif	/* GAME_H */

