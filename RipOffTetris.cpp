#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Block.h"
#include "Game.h"
#include "Tetris.h"
//#include <tchar.h>
//int argc, char** argv
using namespace std;

int main(void)
{

	Game::Start();

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

//	while (window.isOpen())
//	{
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//		}
//		
//}
	//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	//	{
	//		if (release_key == 1)
	//		{
	//			block.moveR();
	//			release_key = 0;
	//		}
	//	}
	//	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	//	{
	//		if (release_key)
	//		{
	//			block.moveL();
	//			release_key = 0;
	//		}
	//	}
	//	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	//	{
	//		if (release_key)
	//		{
	//			block.rotateL();
	//			release_key = 0;
	//		}
	//	}
	//	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	//	{
	//		if (release_key)
	//		{
	//			block.rotateR();
	//			release_key = 0;
	//		}
	//	}
	//	else
	//	{
	//		release_key = 1;
	//	}

	//	if (time(0) >= nextDrop)
	//	{
	//		nextDrop += dropInterval;
	//		block.drop();
	//	}

	//	window.clear();
	//	block.draw(window);
	//	window.display();
	//}
	//
	return 0;
}