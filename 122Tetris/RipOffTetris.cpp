#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include "Block.h"
#include "Game.h"
//#include <tchar.h>


int main(int argc, char** argv)
{

	Game::Start();

	//int p = 0;
	//sf::RenderWindow window(sf::VideoMode(500, 750), "Tetris Rip-Off");

	//const sf::Vector2f s1(100, 500);
	//const sf::Vector2f j1(200, 600);

	/////test objects

	////IBlock i(sf::Vector2f(200, 200));
	////OBlock o(sf::Vector2f(100, 100));
	////TBlock t(sf::Vector2f(100, 300));
	////LBlock l(sf::Vector2f(200, 400));
	////JBlock j(sf::Vector2f(100, 500));
	////SBlock s(sf::Vector2f(200, 600));
	////ZBlock z(sf::Vector2f(350, 350));

	////window.clear();
	////o.draw(window);
	////i.draw(window);
	////t.draw(window);
	////l.draw(window);
	////j.draw(window);
	////s.draw(window);
	////z.draw(window);
	////t.setPosition(350, 550);
	////t.rotateL();
	////t.draw(window);
	////window.display();
	//////s.moveL();

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

	//while (window.isOpen())
	//{
	//	sf::Event event;
	//	while (window.pollEvent(event))
	//	{
	//		if (event.type == sf::Event::Closed)
	//			window.close();
	//	}

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
	//return 0;
}