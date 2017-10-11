#include "gameObject.h"
#include "projectConstants.h"

gameObject::gameObject() {
	m_position = ofVec2f(0, 100);
	m_rotation = 0.0f;
}

gameObject::~gameObject() {
}

void gameObject::init() {

}

void gameObject::update() {

}

void gameObject::render(float rotateAmount, float climbAmount) {
	ofPushMatrix();
		ofSetColor(0, 0, 0);
		ofTranslate(projectConstants::PROJ_WINDOW_RES_X / 2.0f, 0);
		ofRotate(-1 * rotateAmount);
		ofDrawRectangle(0, 1200 - (climbAmount), 50, 50);
	ofPopMatrix();
}