#include "Robot.h"

//private function

//constructor
Robot::Robot(std::string n)
	: name(n),vie(10)
{
}

//public function

void Robot::fire(Robot& r)
{
    r.vie -= 2;
    std::cout << "Robot " << r.name << " a été touché par le Robot " << this->name << " !" << std::endl;

}

bool Robot::isDead()
{
    return vie <= 0;
}


 std::ostream& operator<<(std::ostream& os, const Robot& r) {
    os << "Robot " << r.name;
    return os;
}

