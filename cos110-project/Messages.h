#include <string>

using namespace std;

class Game;

/**
The Messages class holds all those messages that may be displayed to the human player.
*/
class Messages
{
	private:
		const string ACTION_ATTACK;
		const string ACTION_ATTACK_CRITICAL;
		const string ACTION_ATTACK_DEAD;
		const string ACTION_ATTACK_NOTHING;
		const string ACTION_DEFEND;
		const string ACTION_PASS;
		const string CLASS_SELECT;
		const string CLASS_SELECT_ASSASSIN;
		const string CLASS_SELECT_MAGE;
		const string CLASS_SELECT_RANGER;
		const string CLASS_SELECT_WARRIOR;
		const string CLASS_SELECT_OPTION;
		const string GAME_END_COMPLETE;
		const string GAME_END_LOST_DIED;
		const string GAME_END_LOST_WAYPOINT;
		const string GAME_END_QUIT;
		const string MAP_RESET;
		const string MAP_SELECT;
		const string MAP_SELECT_OPTION;
		const string NOT_REQUIRED_PHASE1;
		const string NOT_REQUIRED_PHASE2;
		const string SENTENCE_END;
		const string STATUS_SPRITE_LIFE;
		const string TURN_BEGIN;
		const string TURN_END;
		
		friend class Game;
	
	public:
		Messages() : 
			ACTION_ATTACK("Player attacks, dealing a total damage amount of "),
			ACTION_ATTACK_CRITICAL("Player critical attacks, dealing a total damage amount of "),
			ACTION_ATTACK_DEAD("Player tries to attack something dead or destroyed and wastes a turn.\n"),
			ACTION_ATTACK_NOTHING("Player tries to attack nothing and wastes a turn.\n"),
			ACTION_DEFEND("Player defends against a total damage amount of "),
			ACTION_PASS("Player has passed on their turn.\n"),
			CLASS_SELECT("Please select one of the following classes for your sprite.\n"),
			CLASS_SELECT_ASSASSIN("1. Assassin\n"),
			CLASS_SELECT_MAGE("2. Mage\n"),
			CLASS_SELECT_RANGER("3. Ranger\n"),
			CLASS_SELECT_WARRIOR("4. Warrior\n"),
			CLASS_SELECT_OPTION("Option:\n"),
			GAME_END_LOST_DIED("Player lost the game by dying!\n"),
			GAME_END_LOST_WAYPOINT("Player lost the game by attacking a waypoint! Final score is "),
			GAME_END_QUIT("Player quit the game!\n"),
			GAME_END_COMPLETE("Player finishes the map with a final score of "),
			MAP_RESET("==================== Map has been reset ====================\n"),
			MAP_SELECT("Please select a map to play.\n"),
			MAP_SELECT_OPTION("Map number:\n"),
			NOT_REQUIRED_PHASE1("This feature is not required for phase 1.\n"),
			NOT_REQUIRED_PHASE2("This feature is not required for phase 2.\n"),
			SENTENCE_END(".\n"),
			STATUS_SPRITE_LIFE("Player currently has a life amount of "),
			TURN_BEGIN("Player's turn has begun.\n"),
			TURN_END("Player's turn has ended.\n")
		{
		}
};