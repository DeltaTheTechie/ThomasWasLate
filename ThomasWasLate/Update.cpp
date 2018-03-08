#include "stdafx.h"
#include "Engine.h"
#include <SFML/Graphics.hpp>
#include <sstream>

using namespace sf;

void Engine::update(float dtAsSeconds)
{
	if (m_Playing)
	{
		//count down the time player has left
		m_TimeRemaining -= dtAsSeconds;

		//have thomas and bob run out of time?
		if (m_TimeRemaining <= 0)
		{
			m_NewLevelRequired = true;
		}

	}//end if playing

}//end of update function
