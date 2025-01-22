#include <iostream>

enum LogLevel
{
	LogLevel_Info,
	LogLevel_Warning,
	LogLevel_Error
};

class Logger
{
private:
	LogLevel m_LogLevel = LogLevel_Info;

public:
	void SetLogLevel(LogLevel level)
	{
		m_LogLevel = level;
	}

	void Info(const char* message)
	{
		if (m_LogLevel <= LogLevel_Info)
		{
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

	void Warn(const char* message)
	{
		if (m_LogLevel <= LogLevel_Warning)
		{
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}

	void Error(const char* message)
	{
		if (m_LogLevel <= LogLevel_Error)
		{
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
};

class PureVirtual
{
	virtual void DoSomething() = 0;
};

class Entity : public PureVirtual
{
public:
	virtual void Move() {};

	// Inherited via PureVirtual
	void DoSomething() override
	{
		std::cout << "Doing something" << std::endl;
	}
};

class Player : public Entity
{
public:
	void Move() override
	{
		std::cout << "Player moving" << std::endl;
	}
};

int main()
{
	Player player;
	player.Move();
	player.DoSomething();

	std::cin.get();
}