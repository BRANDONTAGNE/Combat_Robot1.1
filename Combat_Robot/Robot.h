#pragma once
#include <iostream>
#include <string>

class Robot
{
private:
	//private variable
	std::string name;
	int vie;
	//private function
public:
	//constructor
	Robot(std::string n);

	//public function
	void fire(Robot& r);
	bool isDead();

	//inscrition dans  un fichier
	friend std::ostream& operator << (std::ostream & os, const Robot & r);
	
};

