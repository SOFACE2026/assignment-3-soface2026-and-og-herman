#include "fstream"
#include <sstream>
#include <assert.h>
#include "file_logger.cpp"


int main(){
    FileLogger logger("log.txt");
    logger.log("abcdef");

    // read contents of log file
    std::ifstream logfile;
    logfile.open("log.txt");

    logfile.seekg(0, logfile.end);
    auto length = logfile.tellg();
    logfile.seekg(0, logfile.beg);

    char *buffer = new char[length];
    logfile.read(buffer, length);
    std::string contents(buffer, buffer + length - 1);
    delete[] buffer;

    // get expected value accounting for os specific line termination
    std::stringstream ss;
    ss << "abcdef" << std::endl;
    auto expected = ss.str();

    // compare with expected
    assert(expected == contents);

    std::cout << "Alle test kører uden fejl"; 

}