#pragma once
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

class Game
{
public:

	static void Start();

	

private:
	static bool isExiting();
	static void GameLoop();


	static void ShowSplashScreen(); // might exclude not testing now..
	static void ShowMenu();

	enum GameState {Uninitialized, ShowingSplash, Paused, ShowingMenu, Playing, Exiting}; //might take out ShowingSplash 

	static GameState _gameState;
	static sf::RenderWindow _mainWindow;



};
