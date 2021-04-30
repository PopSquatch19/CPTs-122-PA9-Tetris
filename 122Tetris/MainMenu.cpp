#include "stdafx.h"
#include "MainMenu.h"

MainMenu::MenuResult MainMenu::show(sf::RenderWindow& window)
{

	sf::Texture image;

	image.loadFromFile("mainmenu.png");

	sf::Sprite sprite;

	sprite.setTexture(image);

	window.draw(sprite);

	//Play menu item coordinates
	MenuItem playButton;
	playButton.rect.top = 145;
	playButton.rect.bottom = 380;
	playButton.rect.Left = 0;
	playButton.rect.Right = 1023;
	playButton.action = Play;

	//Exit menu item coordinates
	MenuItem exitButton;
	exitButton.rect.Left = 0;
	exitButton.rect.Right = 1023;
	exitButton.rect.Top = 383;
	exitButton.rect.Bottom = 560;
	exitButton.action = Exit;
	_menuItems.push_back(playButton);
	_menuItems.push_back(exitButton);
}