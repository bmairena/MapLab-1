#pragma once
#include <stack>
#include "Location.h"
class Map
{
private:

	std::stack<Location *> _path;
	
public:
	Map(std::string startLocationName);
	~Map();

	Location * CurrentLocation = nullptr;
	void goHome();
	void Move(Location *newLocation);
};

