/* 
 * File:   Game.cpp
 * Author: d-savant
 * 
 * Created on 17 September 2013, 5:03 PM
 */

#include "Game.h"

Game::Game() {
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

void Game::Init()
{
    int flag = 0;
    vector<string> maps;
    
    Messages msg; //message handler
    int input = 0, mapNo = 0, playerType = 0; // playerType will become a type object
    // Game first needs to determine the type the player is.

    cout << msg.CLASS_SELECT << msg.CLASS_SELECT_ASSASSIN << msg.CLASS_SELECT_MAGE << msg.CLASS_SELECT_RANGER << msg.CLASS_SELECT_WARRIOR;
    
    while (flag != 1) // keep going till break
    {
        cout << msg.CLASS_SELECT_OPTION;
        
        cin >> input;
        switch (input)
        {    
            case 1:
                cout << msg.NOT_REQUIRED_PHASE1;
                break;
            case 2:
                cout << msg.NOT_REQUIRED_PHASE1;
                break;
            case 3:
                cout << msg.NOT_REQUIRED_PHASE1;
                break;
            case 4:
                playerType = 4;
                flag = 1;
                break;
        }
    }
    
    // save player type
    //load maps:
    getMaps(maps);
    
    cout << msg.MAP_SELECT;
    
    for (int i = 0; i < maps.size(); ++i)
        cout << (i+1) << ". " << maps[i] << endl;
    
    cout << msg.MAP_SELECT_OPTION;
    cin >> mapNo;
    while (mapNo <= 0 || mapNo > maps.size())
    {
        cout << msg.MAP_SELECT_OPTION;
        cin >> mapNo;
    }
    //eventually when a valid mapNumber is entered, the game loads the map and starts.
    cout << "load map" << mapNo << endl;
    
    
}

