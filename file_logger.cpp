#include "file_logger.hpp"
#include <fstream>
#include <iostream>
// source til hvordan filer virker https://www.w3schools.com/CPP/cpp_files.asp

// Implement this:
FileLogger::FileLogger(std::string filename)
{   
    // konstruktøren opretter en fil som attribut, som hermed er åben til den lukkes. 
    logfile = std::ofstream(filename);
}

// Implement this:
void FileLogger::log(std::string msg)
{   
    // da vi allerede har en åben fil can vi skrive direkte til filen
    logfile << msg << std::endl;
}

// Implement this:
FileLogger::~FileLogger()
{
    // vi lukker ofstream'en før vi sletter instansen
    logfile.close(); 
    // delete this;
}