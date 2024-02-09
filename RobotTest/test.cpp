#include "pch.h"

#include <gtest/gtest.h>
#include "../Combat_Robot/Arena.h"
#include"../Combat_Robot/Combat_Robot.cpp"
#include"../Combat_Robot/Robot.cpp"
#include"../Combat_Robot/Arena.cpp"
#include "../Combat_Robot/Robot.h" // Assurez-vous que votre classe Robot est dans un fichier d'en-tête


TEST(RobotTest, FireTest) {
    Robot r1("Robot1");
    Robot r2("Robot2");
    r1.fire(r2);
    EXPECT_EQ(r2.isDead(), false);
}

TEST(RobotTest, IsDeadTest) {
    Robot r1("Robot1");
    Robot r2("Robot2");
    for (int i = 0; i < 5; ++i) {
        r1.fire(r2);
    }
    EXPECT_EQ(r2.isDead(), true);
}

