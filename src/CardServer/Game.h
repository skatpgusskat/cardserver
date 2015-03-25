#pragma once
#include "Player.h"
#include "protocol.pb.h"
typedef unsigned int PlayerID;
typedef unsigned int GameID;

class Game
{

	enum PlayerType
	{
		PLAYER_1,
		PLAYER_2,
	};

	enum Phase
	{
		UNIT_PHASE,
		VISION_PHASE,
	};

public:
	Game();
	~Game();

	void OnPacket();

	void OnStart();
	void OnTurn();
	bool OnCard(protocol::Card inPacket);
	void OnGameOver();


	PlayerID GetPlayerID(Player* player);
	PlayerID GetPlayerID(PlayerType playerType);
	Player* GetPlayer(PlayerID playerID);
	Player* GetPlayer(PlayerType playerType);
	PlayerType GetPlayerType(Player* player);
	PlayerType GetPlayerType(PlayerID playerID);
private:
	GameID m_GameID;
	PlayerID m_Player1ID;
	PlayerID m_Player2ID;

	Player m_Player1;
	Player m_Player2;


	PlayerType m_TurnPlayerType;
	PlayerType m_ArcaneTurnPlayerType;
	Phase m_Phase;
};

