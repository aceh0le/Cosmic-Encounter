#include <iostream>
#include <vector>
#include <string>
#include <math.h>

#include "DarkGDK.h"
#include "space.h"


void DarkGDK(void)
{
	//initialise the render window
	int ResolutionWidth  = GetSystemMetrics(SM_CXSCREEN);
	int ResolutionHeight = GetSystemMetrics(SM_CYSCREEN);

	dbSetDisplayMode   (1024, 768, 32);
	dbSetWindowPosition(ResolutionWidth / 2 - dbScreenWidth()/2, ResolutionHeight / 2 - dbScreenHeight()/2);

	//initialise render
	dbSyncOn  ();
	dbSyncRate(60);

	//initialise game
	//..


	//debug initialise space
	Space space;
	space.createPlanet(0, 0, 100,100);

	//debug intiialise grid

	//debug initialise buildings


	while(LoopGDK())
	{	
		

		dbSync();
	}

	return;
}