#pragma once

#include "ofMain.h"
#include "projectConstants.h"
#include "ofxLeap.h"
#include "gameObject.h"

class game
{
public:
	enum gameState {
		notInitialized,
		ready,
		playing,
		gameWin,
		gameOver
	};

	game();
	~game();

	void init();
	void update();
	void render();

	void begin();

	gameState getGameState();

	void updatePlayer();

	gameState	m_state;

	gameObject m_player;

	void onLeapFrame(Leap::Frame frame);

	ofxLeapMotion::Device		m_device;
	Leap::Frame					m_frame;

	ofVec3f						m_palmPos;
};