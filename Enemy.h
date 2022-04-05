#pragma once
#include <iostream>
#include "Ship.h"

#ifndef _ENEMY_H_
#define _ENEMY_H_

class Enemy : public Ship
{
public:
	Enemy(class Game* game);
	void UpdateActor(float deltaTime) override;
private:
	void Enemy::SetInitialRandomPosition();
};
#endif