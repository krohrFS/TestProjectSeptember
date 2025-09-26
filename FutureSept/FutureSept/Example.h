#pragma once
#include <iostream>
#include <string>



class Example
{
	// Field list
	std::string name;



public:

	Example()
	{
		name = "steve";
	}


	Example(std::string _name)
	{
		name = _name;
	}


	std::string GetName()
	{

		return name;
	}
};

