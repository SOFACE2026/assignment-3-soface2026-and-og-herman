#pragma once
#include <string>

#include "logger.hpp"
#include "fstream"

// Concrete FileLogger class:
class FileLogger : public Logger
{
public:
    FileLogger(std::string filename);

    virtual void log(std::string msg) override;

    ~FileLogger();

private:
    // tror det står for open file stream, så bare at man har et sted at skrive til
    std::ofstream logfile;
};