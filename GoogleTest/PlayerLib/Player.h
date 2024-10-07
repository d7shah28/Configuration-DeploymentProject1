#pragma once

class Player 
{
private:
    float xPos;
    float yPos;

public:
    // Constructor
    Player(float x, float y);

    // Getters
    float getX() const;
    float getY() const;

};
