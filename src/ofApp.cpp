#include "ofApp.h"
#include "projectConstants.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetWindowShape(
		projectConstants::PROJ_WINDOW_RES_X, 
		projectConstants::PROJ_WINDOW_RES_Y);

	ofSetFrameRate(projectConstants::PROJ_DESIRED_FRAMERATE);

	//initialize the game
	m_game.init();
}

//--------------------------------------------------------------
void ofApp::update(){
	m_game.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	m_game.render();
}

void ofApp::beginGame() {
	m_game.begin();
}















//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
