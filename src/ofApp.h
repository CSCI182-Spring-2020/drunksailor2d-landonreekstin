#pragma once
#define ARRAY_WIDTH 20
#define ARRAY_HEIGHT 20
#define MAX_STEPS 1000
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ofMain.h"

using namespace std;

class ofApp : public ofBaseApp{

	private:

		void sailorMove() {
			{
				// type to be used with the "sailor" movement 
				enum Direction { NORTH, SOUTH, EAST, WEST };

				srand(time(NULL));
				int x = ARRAY_WIDTH / 2;
				int y = ARRAY_HEIGHT / 2;
				int nStepCount = 0;

				// sets all values of the array to 0
				for (int i = 0; i < ARRAY_WIDTH; i++)
				{
					for (int j = 0; j < ARRAY_HEIGHT; j++)
					{
						nMapArray[i][j] = 0;
					}
				}


				// moves the sailor 1 block in a random direction
				while (nStepCount < MAX_STEPS)
				{
					Direction nNextStep = static_cast<Direction>(rand() % 4);
					switch (nNextStep)
					{
					case NORTH:
						if (y > 0)
						{
							y--;
						}
						break;
					case SOUTH:
						if (y < ARRAY_HEIGHT - 1)
						{
							y++;
						}
						break;
					case EAST:
						if (x < ARRAY_WIDTH - 1)
						{
							x++;
						}
						break;
					case WEST:
						if (x > 0)
						{
							x--;
						}
						break;

					}

					// increments the step count and the value of the array at the new position after making 1 move
					nStepCount++;
					nMapArray[x][y] = nMapArray[x][y]++;
				}
			}
	}
	

	public:

		int nMapArray[ARRAY_WIDTH][ARRAY_HEIGHT];

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
