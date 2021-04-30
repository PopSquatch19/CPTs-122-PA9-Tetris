#include "stdafx.h"
#include "Game.h"
#include "Block.h"
#include <SFML/Graphics.hpp>

void Game::Start(void)
{
	if (_gameState != Uninitialized)
	{
		return;
	}

	_mainWindow.create(sf::VideoMode(500, 750), "Tetris Rip-Off");

	//RenderWindow window(sf::VideoMode(500, 750), "Tetris Rip-Off");
	_gameState = Game::Playing;

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
    sf::Event currentEvent;
    while (_mainWindow.pollEvent(currentEvent))
    {

        switch (_gameState)
        {
        case Game::Playing:
        {
            _mainWindow.clear(sf::Color(255, 0, 0));
            _mainWindow.display();

            if (currentEvent.type == sf::Event::Closed)
            {
                _gameState = Game::Exiting;
            }
            break;
        }
        }


		srand(time(0));

	double dropInterval = 1;
	time_t nextDrop = time(0) + dropInterval;

	Block block; //This should probably be in a function of some kind
	int rand_block = rand() % 7;
	switch (rand_block)
	{
	case 0:
		block = IBlock(bStart);
		break;
	case 1:
		block = JBlock(bStart);
		break;
	case 2:
		block = LBlock(bStart);
		break;
	case 3:
		block = SBlock(bStart);
		break;
	case 4:
		block = ZBlock(bStart);
		break;
	case 5:
		block = TBlock(bStart);
		break;
	case 6:
		block = OBlock(bStart);
		break;
	}

	int release_key = 1;

	while (_mainWindow.isOpen())
	{
		sf::Event event;
		while (_mainWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				_mainWindow.close();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
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
		_mainWindow.display();
	}


    }
}
Game::GameState Game::_gameState = Uninitialized;
sf::RenderWindow Game::_mainWindow;