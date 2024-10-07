#include "PlayerLib/pch.h"
#include "gtest/gtest.h"
#include "PlayerLib/Player.h"

TEST(PlayerTest, PlayerTest1)
{
    Player player(5.0f, 10.0f);
    EXPECT_EQ(player.getX(), 5.0f);
    EXPECT_EQ(player.getY(), 10.0f);
}

TEST(PlayerTest, PlayerTest2)
{
    Player player(3.0f, 4.0f);
    EXPECT_EQ(player.getX(), 3.0f);
    EXPECT_EQ(player.getY(), 4.0f);
}

TEST(PlayerTest, PlayerTest3)
{
    Player player(3.0f, 4.0f);
    EXPECT_EQ(player.getX(), 3.0f);
    EXPECT_NE(player.getY(), 2.0f);
}

TEST(PlayerTest, PlayerTest4)
{
    Player player(15.0f, 12.0f);
    EXPECT_NE(player.getX(), 10.0f);
    EXPECT_NE(player.getY(), 8.0f);
}

TEST(PlayerTest, PlayerTest5)
{
    Player player(11.0f, 12.0f);
    EXPECT_NE(player.getX(), 3.0f);
    EXPECT_NE(player.getY(), 4.0f);
}
