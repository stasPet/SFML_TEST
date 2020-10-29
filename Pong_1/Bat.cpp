#include "Bat.h"

// This the constructor and it is called when we create an object
Bat::Bat(float startX, float startY)
{
    position.x = startX;
    position.y = startY;
 
    batShape.setSize(sf::Vector2f(50, 5) );
    batShape.setPosition(position);
}

sf::FloatRect Bat::GetPosition()
{
    return batShape.getGlobalBounds();
}
 
sf::RectangleShape Bat::GetShape()
{
    return batShape;
}
 
void Bat::MoveLeft()
{
    position.x -= batSpeed;
}
void Bat::MoveRight()
{
    position.x += batSpeed;
}
void Bat::Update()
{
    batShape.setPosition(position);
}