#pragma once

#include <iostream>
#include <SFML\Graphics.hpp>
#include <fstream>
#include <sstream>

#include "Sound.h"
#include "TextureObject.h"
#include "Selectable.h"
#include "Unit.h"
#include "StatManagerBuilding.h"

using namespace sf;
using namespace std;


class Building : public Drawable , public Selectable
{

private :

	Texture m_sfBuildingTexture;
	Sprite m_sfBuildingSprite;
	RectangleShape m_sfRect;

	Vector2f m_sfPosition;
	Vector2f m_sfSize;


	

	TextureObject *m_Gametextures;// \brief handle to all game textures

	

public:

	Building();
	Building(int id, Vector2f pos, float rot, string path);

	StatManagerBuilding m_stats;


	float m_fCurrentHitPoints;
	

	void spawnUnit(int nation, int id);
	string update(float dt);
	void draw(RenderTarget& target, RenderStates states) const;

	//spawning unit stuff
	bool m_bSpawningUnit;
	int m_iIdOfSpawningUnit;
	float m_fTimeofSpawn;
	Vector2f m_sfUnitSpawnPos; //actual
	float m_fRotation;



};