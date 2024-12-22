#include <iostream>
#include <vector>
#include <easyx.h>
#include <conio.h>

// 控制台参数
const int CONSOLE_WIDTH = 800;
const int CONSOLE_HEIGHT = 600;
const int UNIT_SIZE = 10;

class Snake
{
public:
private:
	int m_x;
	int m_y;
};

/* 游戏场景 */
class GameScene
{
public:
	void awake()
	{

	}

	void start()
	{

	}

	void update()
	{
		while (true)
		{

		}
	}

	void late_update()
	{
		while (true)
		{

		}
	}
};

int main()
{
	initgraph(CONSOLE_WIDTH, CONSOLE_HEIGHT);

	GameScene scene;
	scene.awake();
	scene.start();
	scene.update();
	scene.late_update();

	char ch = _getch();
	return 0;
}