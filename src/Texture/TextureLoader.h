#ifndef __Texture_Loader_H__
#define __Texture_Loader_H__

#include "TextureTool.h"
#include <SFML/Graphics/Texture.hpp>

class TextureLoader{
private:
    static TextureTool WATER_TEXTURE;
    static TextureTool LAND_TEXTURE;
    static TextureTool MARKET_TEXTURE;
    static TextureTool WIND_TEXTURE;
    static TextureTool BOAT_TEXTURE;
    static TextureTool ANCHOR_TEXTURE;

public:

    static sf::Texture* getWaterTexture();
    static sf::Texture* getLandTexture();
    static sf::Texture* getMarketTexture();
    static sf::Texture* getWindTexture();
    static sf::Texture* getBoatTexture();
    static sf::Texture* getAnchorTexture();
};

#endif