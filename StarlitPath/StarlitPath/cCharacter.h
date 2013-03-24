/*
=================
cCharacter.h
- Header file for class definition - SPECIFICATION
- Header file for the Sprite class
=================
*/
#ifndef _CCharacter_H
#define _CCharacter_H
#include "cSprite.h"

class cCharacter : public cSprite
{
private:
	int mScore;
	eDirection mDirection;

public:
	cCharacter();
	cCharacter(D3DXVECTOR3 sPosition, LPDIRECT3DDEVICE9 pd3dDevice, LPCSTR theFilename); // Constructor
	void update(float deltaTime);					// update the balloons position based on the translation
	eDirection getDirection();      // Rturns the current direction of the sprite
	void setDirection(eDirection theDirection); // Sets the current direction for the sprite.
};
#endif