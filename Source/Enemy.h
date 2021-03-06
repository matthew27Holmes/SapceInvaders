#pragma once
#include "Actor.h"
#include <string>
class Enemy :public Actor
{
public:
	Enemy();
	Enemy(Enemy&&rhs);
	bool init(std::shared_ptr<ASGE::Renderer> renderer);

	virtual float GetXpostion(int i);
	virtual float GetYpostion(int i);
	float GetWidth(int i);
	float Gethight(int i);
	int Getvalue(int i);
	void Render(std::shared_ptr<ASGE::Renderer> renderer);
	void Move(float dt);

	void MoveDown(float dt);
	bool GetDeadSprites(int i);
	void reset();
	bool areAllSpritesDead();
	bool hasEnemyhasWon();
	bool getHasEnemyWon();
	void killSprite(int i);
	void setEnemyWin(bool hasWon);

private:
	std::unique_ptr<ASGE::Sprite> Invaders;
	std::vector<std::unique_ptr<ASGE::Sprite>>Enemys;
	std::vector<int>EnemyVal;
	std::vector<bool>Deadsprite;
	float Xpos;
	float Ypos;
	float Width;
	float Height;
	float x = 120;
	float y = 80;
	int val = 40;

	int speed;
	int howManyEnemiesKilled;
	int score;
	char* sprite;

	bool MovingRight;
	bool HasEnemyWon;
};