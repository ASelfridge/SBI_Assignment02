#include "game.h"
#include "projectConstants.h"

game::game() {
	m_state = gameState::notInitialized;
}

game::~game(){
}

void game::init() {
	m_device.connectEventHandler(&game::onLeapFrame, this);
	m_player.init();
}

void game::onLeapFrame(Leap::Frame frame) {
	m_frame = frame;
}

void game::update() {
	m_device.update();

	const Leap::HandList& hands = m_frame.hands();

	for (int i = 0; i < hands.count(); i++) {
		cout << hands.count();
		const Leap::Hand& hand = hands[i];
		const Leap::Vector palmPos = hand.palmPosition();
		const ofVec3f ofPalmPos = ofxLeapMotion::toVec3(hand.palmPosition());
		const ofVec3f ofStabilizePalmPos = ofxLeapMotion::toVec3(hand.stabilizedPalmPosition());

		m_palmPos.x = ofPalmPos.x;
		m_palmPos.y = ofPalmPos.y * 3.0f;

		//set boundaries
		//m_palmPos.x = ofClamp(m_palmPos.x, -(float)projectConstants::PROJ_WINDOW_RES_X / 2.0f, (float)projectConstants::PROJ_WINDOW_RES_X / 2.0f);
		//m_palmPos.y = ofClamp(m_palmPos.y, -(float)projectConstants::PROJ_WINDOW_RES_Y / 2.0f, (float)projectConstants::PROJ_WINDOW_RES_Y / 2.0f);

		//change co-ordinates to middle of the screen
		//m_palmPos += ofVec3f((float)projectConstants::PROJ_WINDOW_RES_X / 2.0f, 0.0f, (float)projectConstants::PROJ_WINDOW_RES_Y / 2.0f);

		break;
	}
}

void game::render() {
	cout << m_palmPos.y << "\n";
	m_player.render(m_palmPos.x, m_palmPos.y);
}

void game::begin(){
	m_state = gameState::playing;
}

game::gameState game::getGameState() {
	return m_state;
}

void game::updatePlayer() {

}