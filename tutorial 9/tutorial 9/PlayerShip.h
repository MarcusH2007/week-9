
#ifndef _PLAYERSHIP_H
#define _PLAYERSHIP_H

class Vector2f;

class PlayerShip
{
public:

private:
	int energy;
	Vector2f* position;


public:
	static const int MAX_ENERGY;

	PlayerShip();

	PlayerShip(Vector2f* pos);
	/* a one parameter constructor is assumed to copy
	 * or convert between types. the explicit keyword
	 * advises the compiler that this should not 
	 * be used for such implicit conversions
	 */

	~PlayerShip();

	void takeHit(int points);

	Vector2f* getPosition();
	void setPosition(Vector2f* value);

	//for the examples
	void printShipInfo();
};
#endif
