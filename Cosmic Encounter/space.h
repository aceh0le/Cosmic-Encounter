#ifndef _SPACE_H
#define _SPACE_H

#include <vector>
#include <string>

class Space
{
	public:
		//std::vector<Planet> _planet;

	public:
		 Space();
		~Space();

		void			 createPlanet			(unsigned int ID, unsigned int SpriteID, int x, int y);
	
};

#endif  _SPACE_H