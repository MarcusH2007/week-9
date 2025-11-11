#include "PlayerShip.h"
#include "Vector2f.h"

#include <iostream>
using std::cout;
using std::endl;

const int PlayerShip::MAX_ENERGY = 100;

PlayerShip::PlayerShip()
{
	energy = MAX_ENERGY;
	position = nullptr;
}

PlayerShip::PlayerShip(Vector2f* pos)
{
	energy = MAX_ENERGY;
	setPosition(pos);
}

PlayerShip::~PlayerShip()
{
	delete position;
	position = nullptr;
}

void PlayerShip::takeHit(int points)
{
	energy -= points;
}

void PlayerShip::setPosition(Vector2f* value)
{
	/* this is a little naive, i should really check
	   there isn't a value here already
	 */
	position = value;
}

Vector2f* PlayerShip::getPosition()
{
	/* this is a very naive, once this pointer had
	   been given some other code it can be changed,
	   i.e its no longer private
	 */
	return position;
}

/* note: this is only for the class examples adding test
   code like this into our classes increases the coupling
   (e.g. to cout etc.) we'd normally use friend classes or a 
   test framework
 */
void PlayerShip::printShipInfo()
{
	cout << "** Player Ship **" << endl;

	if (position != nullptr)
		cout << "position is :(X: " << position->getX()
		<< ",Y:" << position->getY()
		<< ")" << endl;
}
