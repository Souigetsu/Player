//////////////////////////////////////////////////////////////////////////////////
/// This file is part of EasyRPG Player.
/// 
/// EasyRPG Player is free software: you can redistribute it and/or modify
/// it under the terms of the GNU General Public License as published by
/// the Free Software Foundation, either version 3 of the License, or
/// (at your option) any later version.
/// 
/// EasyRPG Player is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU General Public License for more details.
/// 
/// You should have received a copy of the GNU General Public License
/// along with EasyRPG Player.  If not, see <http://www.gnu.org/licenses/>.
//////////////////////////////////////////////////////////////////////////////////

#ifndef _SPRITESET_MAP_H_
#define _SPRITESET_MAP_H_

////////////////////////////////////////////////////////////
/// Headers
////////////////////////////////////////////////////////////
#include "tilemap.h"
#include "plane.h"

////////////////////////////////////////////////////////////
/// Spriteset_Map class
////////////////////////////////////////////////////////////
class Spriteset_Map {
public:
    Spriteset_Map();
    ~Spriteset_Map();

    void Update();
    
protected:
	Tilemap* tilemap;
    Plane* panorama;
    Plane* fog;
    /*std::vector<Sprite_Character*> character_sprites;
    std::vector<Sprite_Picture*> picture_sprites;
	Weather* weather;
    Sprite_Timer* timer_sprite;*/
};

#endif
