#include "pch.h"
#include "Enemy.h"

Enemy::Enemy(float x, float y) : xPos(x), yPos(y) {}

void Enemy::move(float deltaX, float deltaY) 
{
    xPos += deltaX;
    yPos += deltaY;
}

float Enemy::getX() const 
{
    return xPos;
}

float Enemy::getY() const 
{
    return yPos;
}