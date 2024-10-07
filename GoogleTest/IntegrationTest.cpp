#include "EnemyLib/pch.h"
#include "gtest/gtest.h"
#include "PlayerLib/Player.h"
#include "EnemyLib/Enemy.h"
#include <iostream>


class IntegrationTest : public testing::Test
{
protected:
    Player player;
	Enemy enemy;

	IntegrationTest() : player(0.0f, 0.0f), enemy(5.0f, 5.0f) {}

	void SetUp() override
	{
		/*player = Player(0.0f, 0.0f);
		enemy = Enemy(5.0f, 5.0f);*/
	}
	void TearDown() override
	{
		
	}
};

TEST_F(IntegrationTest, IntegrationTest1)
{
	player = Player(0.0f, 0.0f);
	enemy = Enemy(5.0f, 5.0f);
    EXPECT_EQ(player.getX(), 0.0f);
    EXPECT_EQ(player.getX(), 0.0f);
	EXPECT_EQ(enemy.getX(), 5.0f);
    EXPECT_EQ(enemy.getY(), 5.0f);
}

TEST_F(IntegrationTest, IntegrationTest2)
{
	player = Player(6.0f, 8.0f);
	enemy = Enemy(12.0f, 17.0f);
	EXPECT_EQ(player.getX(), 6.0f);
	EXPECT_EQ(player.getY(), 8.0f);
	EXPECT_EQ(enemy.getX(), 12.0f);
	EXPECT_EQ(enemy.getY(), 17.0f);
}

TEST_F(IntegrationTest, IntegrationTest3)
{
	player = Player(5.0f, 4.0f);
	enemy = Enemy(10.0f, 12.0f);
	EXPECT_EQ(player.getX(), 5.0f);
	EXPECT_NE(player.getX(), 0.0f);
	EXPECT_EQ(enemy.getX(), 10.0f);
	EXPECT_NE(enemy.getY(), 5.0f);
}

TEST_F(IntegrationTest, IntegrationTest4)
{
	player = Player(0.0f, 0.0f);
	enemy = Enemy(5.0f, 5.0f);
	EXPECT_NE(player.getX(), 50.0f);
	EXPECT_NE(player.getX(), 60.0f);
	EXPECT_NE(enemy.getX(), 0.0f);
	EXPECT_NE(enemy.getY(), 0.0f);
}

TEST_F(IntegrationTest, IntegrationTest5)
{
	player = Player(0.0f, 0.0f);
	enemy = Enemy(5.0f, 5.0f);
	EXPECT_NE(player.getX(), 1.0f);
	EXPECT_NE(player.getX(), 1.0f);
	EXPECT_NE(enemy.getX(), 0.0f);
	EXPECT_NE(enemy.getY(), 0.0f);
}



int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	// Load the DLL
	HMODULE hDll = LoadLibrary(TEXT("ProcessOrdersLib_TEST_FIXTURES.dll"));
	if (hDll) {
		FreeLibrary(hDll);
	}
	else {
		std::cerr << "Could not load the DLL." << std::endl;
	}
	return RUN_ALL_TESTS();
}