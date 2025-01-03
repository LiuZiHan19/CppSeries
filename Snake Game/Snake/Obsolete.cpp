//#include <iostream>
//#include <easyx.h>
//#include <vector>
//
//// ����̨����
//const int CONSOLE_WIDTH = 800;
//const int CONSOLE_HEIGHT = 600;
//
///* ���� */
//class Sprite
//{
//public:
//	Sprite() : Sprite(0, 0) {};
//	Sprite(int x, int y) : m_x(x), m_y(y) {};
//
//	virtual void draw()
//	{
//		setfillcolor(m_color);
//		// ���Ͻǵĵ� => ���½ǵĵ�
//		fillrectangle(m_x, m_y, m_x + m_width, m_y + m_height);
//	}
//
//	void MoveBy(int x, int y)
//	{
//		m_x += x;
//		m_y += y;
//	}
//
//	void erase(int x, int y)
//	{
//		setfillcolor(BLACK);
//		fillrectangle(m_x + x, m_y + y, m_width, m_height);
//	}
//
//	void set_size(int width, int height)
//	{
//		m_width = width;
//		m_height = height;
//	}
//
//	void set_color(COLORREF color)
//	{
//		m_color = color;
//	}
//
//protected:
//	int m_x;
//	int m_y;
//	int m_width = 10;
//	int m_height = 10;
//	COLORREF m_color = YELLOW;
//};
//
///* ���� */
//class Snake : public Sprite
//{
//public:
//	Snake() : Snake(0, 0) {};
//	Snake(int x, int y) : Sprite(x, y)
//	{
//		m_bodys.push_back(Sprite(m_x - 20, m_y));
//		m_bodys.push_back(Sprite(m_x - 10, m_y));
//		m_bodys.push_back(Sprite(m_x, m_y));
//	};
//
//	void draw() override
//	{
//		Sprite::draw();
//		for (int i = 0; i < m_bodys.size(); i++)
//		{
//			m_bodys[i].draw();
//		}
//	}
//
//	void MoveBy(int x, int y)
//	{
//		for (size_t i = 0; i < m_bodys.size(); i++)
//		{
//			m_bodys[i].MoveBy(x, y);
//			m_bodys[i].erase(x - 10, y);
//		}
//	}
//
//private:
//	std::vector<Sprite> m_bodys; // ����
//};
//
///* ǽ�� */
//class Wall : public Sprite
//{
//public:
//	Wall() : Wall(0, 0) {};
//	Wall(int x, int y) : Sprite(x, y) {};
//
//	// ���ڴ洢ǽ��λ��
//	std::vector<std::pair<int, int>> wall_positions;
//
//	void create_wall()
//	{
//		// ����
//		m_x = 0;
//		m_y = 0;
//		for (size_t i = 0; i < CONSOLE_WIDTH; i += 10)
//		{
//			m_x = i;
//			draw();
//			wall_positions.push_back({ m_x, m_y });
//		}
//
//		// ����
//		m_x = 0;
//		m_y = CONSOLE_HEIGHT - 10;
//		for (size_t i = 0; i < CONSOLE_WIDTH; i += 10)
//		{
//			m_x = i;
//			draw();
//			wall_positions.push_back({ m_x, m_y });
//		}
//
//		// ����
//		m_x = 0;
//		m_y = 0;
//		for (size_t i = 0; i < CONSOLE_HEIGHT; i += 10)
//		{
//			m_y = i;
//			draw();
//			wall_positions.push_back({ m_x, m_y });
//		}
//
//		// ����
//		m_x = CONSOLE_WIDTH - 10;
//		m_y = 0;
//		for (size_t i = 0; i < CONSOLE_HEIGHT; i += 10)
//		{
//			m_y = i;
//			draw();
//			wall_positions.push_back({ m_x, m_y });
//		}
//	}
//};
//
///* ��Ϸ���� */
//class GameScene
//{
//public:
//	GameScene() : snake(40, 20) {};
//
//	void Awake()
//	{
//		wall.set_color(BLUE);
//		wall.create_wall();
//
//	};
//
//	void Start()
//	{
//
//	};
//
//	//��Ϸѭ��
//	void Update()
//	{
//		while (1)
//		{
//			snake.draw();
//			snake.MoveBy(10, 0);
//			Sleep(100);
//		}
//	};
//
//private:
//	Snake snake;
//	Wall wall;
//	// Snake snake(50, 50); // �� C++ �У����������ڲ�ͬʱ����ͳ�ʼ����Ա������
//};
//
//int main()
//{
//	initgraph(CONSOLE_WIDTH, CONSOLE_HEIGHT);
//
//	GameScene gameScene;
//	gameScene.Awake();
//	gameScene.Start();
//	gameScene.Update();
//
//	getchar();
//	return 0;
//}
