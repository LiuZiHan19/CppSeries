#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>

class Logger
{
public:
    void Log(const std::string& message)
    {
        std::cout << message << std::endl;
    }
};

#endif /* LOG_H */
