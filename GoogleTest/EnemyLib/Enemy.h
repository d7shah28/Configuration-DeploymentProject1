#pragma once

class Enemy
{
public:
    __declspec(dllexport) Enemy(float x = 0.0f, float y = 0.0f);  // Constructor to set initial position
    __declspec(dllexport) void move(float deltaX, float deltaY);    // Move the enemy by a delta
    __declspec(dllexport) float getX() const;                       // Get current X position
    __declspec(dllexport) float getY() const;                       // Get current Y position

private:
    float xPos;  // X position of the enemy
    float yPos;  // Y position of the enemy
};
