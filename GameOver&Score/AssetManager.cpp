#include "AssetManager.h"
#include <iostream>

namespace SSEngine
{
    void AssetManager::LoadTexture(std::string name, std::string fileName)
    {
        sf::Texture tex;

        if ( tex.loadFromFile( fileName ) )
        {
            // std::cout << "Texture: " << fileName << " successful." << std::endl;
            this->m_Textures[name] = tex;
        }
    }

    sf::Texture& AssetManager::GetTexture(std::string name)
    {
        return this->m_Textures.at(name);
    }

    void AssetManager::LoadFont(std::string name, std::string fileName)
    {
        sf::Font font;

        if ( font.loadFromFile( fileName ) )
        {
            this->m_Font[name] = font;
        }
    }

    sf::Font& AssetManager::GetFont(std::string name)
    {
        return this->m_Font.at(name);
    }
}