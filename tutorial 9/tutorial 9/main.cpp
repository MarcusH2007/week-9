#include <iostream> //for cout/endl etc.
#include <cstdlib> //c++ version of stdlib - for exit.

#include "Vector2f.h"
#include "PlayerShip.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
	/* PlayerShip needs a Vector2f object
	*/

	PlayerShip* ship = new PlayerShip();

	/* 1. create the Vector2f then give it to PlayerShip */

	//vector2f* pos = new Vector2f();
	//ship->setPosition(pos);

	/* 2. the alternative is to create the object 
	   and pass it straight into PlayerShip
	 */
	ship->setPosition(new Vector2f(1.1f, 2.2f));

	/* 3. or i can use my overloaded constructor
	*/

	//PlayerShip* ship= new PlayerShip(new Vector2f(1.1f,2.2f));

	/* NOTE: i delete none of these, ship takes responsibility
	*/

	ship->printShipInfo();

	delete ship;

	exit(0);
}
