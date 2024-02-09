#include "Arena.h"
#include"Robot.h"

int main() {
    Robot D2R2("D2R2");
    Robot Data("Data");
    //game loop

 Robot& winner = Arena::fight(D2R2, Data);
    std::cout << "Le vainqueur est " << winner << std::endl;

    return 0;
}
