#pragma once

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace SSEngine
{
    class MainMenuState : public State
    {
    public:
        MainMenuState(GameDataRef data);

        void Init();

        void HandleInput();
        void Update( float dt );
        void Draw( float dt );

    private:
        GameDataRef m_Data;

        sf::Sprite m_BackgroundSprite;
        sf::Sprite m_TitleSprite;
        sf::Sprite m_PlayButtonSprite;
        sf::Sprite m_CloseButtonSprite;
    };
}