#pragma once
#include "Global.h"

// D�finit le type de l'ennemi en fonction du niveau
class TypeEnemy
{
public:
	//TypeEnemy(int life, int	dommage,int speedFire, int speed, int rate)
	TypeEnemy(int life, int	dommage,int speedFire, int speed, int rate, int laserQty, int score);
	~TypeEnemy();

	int getLife();
	int getDommage();
	int getLaserSpeed();
	int getSpeed();
	int getRate();
	int getLaserQty();
	int getScore();
private : 
	//la vitesse de d�placement de l'ennemi
	int speed;
	//la vie de l'ennemi
	int life;
	//Niveau de d�g�t
	int dommage;
	//Vitesse de d�placement des lasers
	int LaserSpeed;
	//Fr�quence de sortie des lasers
	int rate;
	// Nombre de laser
	int laserQty;
	// Score par enemy
	int score;
};

