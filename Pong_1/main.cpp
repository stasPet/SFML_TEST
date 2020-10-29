#include "Bat.h"

int main()
{
    int windowWidth = 1024;
    int windowHeight = 768;
    // Make a window that is 1024 by 768 pixels
    // And has the title "Pong"
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Pong");

    int score = 0;
    int lives = 3;
 
    // create a bat
    Bat bat (windowWidth / 2, windowHeight - 20);

        // This "while" loop goes round and round- perhaps forever
    while (window.isOpen() )
    {
        sf::Event event;
        while (window.pollEvent(event) )
        {
            if (event.type == sf::Event::Closed)
                // Someone closed the window- bye
                window.close();
        }
 
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) )
        {
            // move left...
            bat.MoveLeft();
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) )
        {
            // move right...
            bat.MoveRight();
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) )
        {
            // quit...
            // Someone closed the window- bye
            window.close();
        }

        bat.Update();
 
        // Clear everything from the last frame
        window.clear(sf::Color(26, 128, 182,255) );
 
        window.draw(bat.GetShape() );

        // Show everything we just drew
        window.display();
    }

    return 0;
}