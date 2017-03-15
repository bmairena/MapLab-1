#include "Map.h"



Map::Map(std::string startLocationName)
{
	CurrentLocation = new Location(startLocationName);
}


Map::~Map()
{
}

void Map::Move(Location *newLocation) 
{	
	_path.push(newLocation);
	CurrentLocation = newLocation;
}

std::string Map::goHome()
{

	return _path;
}
