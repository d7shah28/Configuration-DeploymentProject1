#include "PlayerLib/pch.h"
#include "gtest/gtest.h"
#include "EnemyLib/Enemy.h"


TEST(EnemyTest, EnemyTest1)
{
    Enemy enemy(5.0f, 10.0f);
    EXPECT_EQ(enemy.getX(), 5.0f);
    EXPECT_EQ(enemy.getY(), 10.0f);
}

TEST(EnemyTest, EnemyTest2)
{
    Enemy enemy(6.0f, 8.0f);
    EXPECT_EQ(enemy.getX(), 6.0f);
    EXPECT_EQ(enemy.getY(), 8.0f);
}

TEST(EnemyTest, EnemyTest3)
{
    Enemy enemy(3.0f, 0.0f);
    EXPECT_NE(enemy.getX(), 0.0f);
    EXPECT_EQ(enemy.getY(), 0.0f);
}

TEST(EnemyTest, EnemyTest4)
{
    Enemy enemy(2.0f, 4.0f);
    EXPECT_NE(enemy.getX(), 6.0f);
    EXPECT_NE(enemy.getY(), 0.0f);
}

TEST(EnemyTest, EnemyTest5)
{
    Enemy enemy(0.0f, 0.0f);
    EXPECT_NE(enemy.getX(), 3.0f);
    EXPECT_NE(enemy.getY(), 6.0f);
}



