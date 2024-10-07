#include "pch.h"
#include "Player.h"

// Constructor definition
Player::Player(float x, float y) : xPos(x), yPos(y) {}

// Getter for X position
float Player::getX() const 
{
    return xPos;
}

// Getter for Y position
float Player::getY() const 
{
    return yPos;
}
