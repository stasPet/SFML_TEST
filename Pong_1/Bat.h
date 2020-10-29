#pragma once
#include <SFML/Graphics.hpp>
 
class Bat
{
private:
    sf::Vector2f position;
    sf::RectangleShape batShape;
    float batSpeed = .3f;
 
public:
    Bat(float startX, float startY);
 
    sf::FloatRect GetPosition();
    sf::RectangleShape GetShape();
 
    void MoveLeft();
    void MoveRight();
    void Update();
};