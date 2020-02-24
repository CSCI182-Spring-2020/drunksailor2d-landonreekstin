#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// Setup the window
	ofBackground(0, 0, 0);
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	sailorMove();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
// draws the boxes with shades of color depending on the amount of moves in the square
void ofApp::draw(){
	for (int i = 0; i < ARRAY_HEIGHT - 1; i++)
	{
		for (int j = 0; j < ARRAY_WIDTH - 1; j++)
		{
			float alpha = ofMap(nMapArray[j][i], 0, 20, 0, 255);
			ofSetColor(0, 255, 50, alpha);

			/*glm::vec3 p;
			p.x = j * 20;
			p.y = i * 20;*/

			ofDrawRectangle(j * 20, i * 20, 20, 20);
		}
	}
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
