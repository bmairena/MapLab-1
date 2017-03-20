#include "Map.h"
#include <iostream>



Map::Map(std::string startLocationName)
{
	CurrentLocation = new Location(startLocationName);
	_path.push(CurrentLocation);
}


Map::~Map()
{
	
}

void Map::Move(Location *newLocation) 
{	
	_path.push(newLocation);
	CurrentLocation = newLocation;
}

void Map::goHome()
{
	if (!(_path.empty()))
	{
		for (int i = _path.size() - 1; i >= 0; i--)
		{
			if (i == 0)
			{
				CurrentLocation = _path.top();
			}
			else
			{
				_path.pop();
			}
		}
	}

	_path.push(CurrentLocation);
	std::cout << "You are now home: " << _path.top()->getName() << std::endl;
}