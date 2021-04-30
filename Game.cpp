#include "stdafx.h"
#include "Game.h"
#include "Block.h"
#include <SFML/Graphics.hpp>
#include "SplashScreen.h"
#include "MainMenu.h"
using namespace std;

void Game::Start(void)
{
	if (_gameState != Uninitialized)
	{
		return;
	}

	_mainWindow.create(sf::VideoMode(1024,768,32), "Tetris Rip-Off");


	sf::Texture splash;

	if (!splash.loadFromFile("splashscreen.png"))
	{
		cout << "Error loading picture:" << endl;
	}

	sf::Sprite spriteSplash;

	spriteSplash.setTexture(splash);


	_gameState = Game::ShowingSplash;

	while (!isExiting())
	{
		GameLoop();
	}
	_mainWindow.close();

}

bool Game::isExiting()
{
    if (_gameState == Game::Exiting)
        return true;
    else
        return false;
}
void Game::GameLoop()
{
	switch (_gameState)
	{
	case Game::ShowingMenu:
	{
		ShowMenu();
		break;
	}
	case Game::ShowingSplash:
	{
		ShowSplashScreen();
		break;
	}
	case Game::Playing:
	{
		sf::Event currentEvent;
		while (_mainWindow.pollEvent(currentEvent))
		{
			_mainWindow.clear(sf::Color(0, 0, 0));
			_mainWindow.display();

			if (currentEvent.type == sf::Event::Closed) _gameState = Game::Exiting;
			if (currentEvent.type == sf::Event::KeyPressed)
			{
				if (currentEvent.key.code == sf::Keyboard::Escape) ShowMenu();
			}
		}
		break;
	}
	}

		//srand(time(0));

	//double dropInterval = 1;
	//time_t nextDrop = time(0) + dropInterval;

	//Block block; //This should probably be in a function of some kind
	//int rand_block = rand() % 7;
	//switch (rand_block)
	//{
	//case 0:
	//	block = IBlock(bStart);
	//	break;
	//case 1:
	//	block = JBlock(bStart);
	//	break;
	//case 2:
	//	block = LBlock(bStart);
	//	break;
	//case 3:
	//	block = SBlock(bStart);
	//	break;
	//case 4:
	//	block = ZBlock(bStart);
	//	break;
	//case 5:
	//	block = TBlock(bStart);
	//	break;
	//case 6:
	//	block = OBlock(bStart);
	//	break;
	//}

	//int release_key = 1;

	/*while (_mainWindow.isOpen())
	{
	sf::Event event;
	while (_mainWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			_mainWindow.close();
	}
	_mainWindow.clear();
	_mainWindow.display();*/
	//_mainWindow.draw(spriteSplash);



		/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			if (release_key == 1)
			{
				block.moveR();
				release_key = 0;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			if (release_key)
			{
				block.moveL();
				release_key = 0;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
		{
			if (release_key)
			{
				block.rotateL();
				release_key = 0;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		{
			if (release_key)
			{
				block.rotateR();
				release_key = 0;
			}
		}
		else
		{
			release_key = 1;
		}

		if (time(0) >= nextDrop)
		{
			nextDrop += dropInterval;
			block.drop();
		}

		_mainWindow.clear();
		block.draw(_mainWindow);
		_mainWindow.display();*/
	}


//}
//}


void Game::ShowSplashScreen()
{
	 SplashScreen splashScreen;
	splashScreen.show(_mainWindow);
	_gameState = Game::ShowingMenu;
}
void Game::ShowMenu()
{
	MainMenu mainMenu;
	MainMenu::MenuResult result = mainMenu.show(_mainWindow);
	switch (result)
	{
	case MainMenu::Exit:
		_gameState = Game::Exiting;
		break;
	case MainMenu::Play:
		_gameState = Game::Playing;
		break;
	}
}
Game::GameState Game::_gameState = Uninitialized;
sf::RenderWindow Game::_mainWindow;