#include "stdafx.h"
#include "SplashScreen.h"
//#include <SFML/Graphics.hpp>
//#include "SFML/Window.hpp"

void SplashScreen::show(sf::RenderWindow& renderWindow)
{
	sf::Texture splash;
    //sf::Image splash;
	if (!splash.loadFromFile("splashscreen.png"))
	{
		return;
	}

    sf::Sprite sprite(splash);

   

    renderWindow.draw(sprite);
	renderWindow.display();

    sf::Event event;
    while (true)
    {
        while (renderWindow.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::KeyPressed
                || event.type == sf::Event::EventType::MouseButtonPressed
                || event.type == sf::Event::EventType::Closed)
            {
                return;
            }
        }
    }

}