#include "stdafx.h"
#include "MainMenu.h"

MainMenu::MenuResult MainMenu::show(sf::RenderWindow& window)
{

	sf::Texture image;

	image.loadFromFile("mainmenu.png");

	sf::Sprite sprite(image);

	//sprite.setTexture(image);

	//window.draw(sprite);

	//Play menu item coordinates
	MenuItem playButton;
	playButton.rect.top = 145;
	playButton.rect.height = 380;
	playButton.rect.left = 0;
	playButton.rect.width = 1023;
	playButton.action = Play;

	//Exit menu item coordinates
	MenuItem exitButton;
	exitButton.rect.left = 0;
	exitButton.rect.width = 1023;
	exitButton.rect.top = 383;
	exitButton.rect.height = 560;
	exitButton.action = Exit;
	_menuItems.push_back(playButton);
	_menuItems.push_back(exitButton);

	window.draw(sprite);
	window.display();

	return getMenuResponse(window);
}

MainMenu::MenuResult MainMenu::handleClick(int x, int y)
{
	std::list<MenuItem>::iterator it;
	for (it = _menuItems.begin(); it != _menuItems.end(); it++)
	{
		sf::Rect<int> menuItemRect = (*it).rect;
		if (menuItemRect.height > y ///bottom
			&& menuItemRect.top < y //top
			&& menuItemRect.left < x //left
			&& menuItemRect.width > x) //right
		{
			return (*it).action;
		}
	}
	return Nothing;

}

MainMenu::MenuResult  MainMenu::getMenuResponse(sf::RenderWindow& window)
{
	sf::Event menuEvent;
	while (42 != 43)
	{
		while (window.pollEvent(menuEvent))
		{
			if (menuEvent.type == sf::Event::MouseButtonPressed)
			{
				return handleClick(menuEvent.mouseButton.x, menuEvent.mouseButton.y);
			}
			if (menuEvent.type == sf::Event::Closed)
			{
				return Exit;
			}
		}
	}
}