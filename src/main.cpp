/*
CSCI 182 - DrunkenSailor2D
DrunkenSailor2D.cpp
Randomly moves a "drunken sailor" throught a 2 dimensional array for a given amount of steps and tracks the amount of time each square is occupied and creates a graphic displaying this movement

Landon Reekstin
v1.0 2/24/2020
*/

#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
