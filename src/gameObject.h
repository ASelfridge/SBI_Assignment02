#pragma once

#include "ofMain.h"

class gameObject
{
public:
	gameObject();
	~gameObject();

	void init();
	void update();
	void render(float rotateAmount, float climbAmount);

	ofVec2f		m_position;
	ofVec2f		m_velocity;
	float		m_rotation;
};