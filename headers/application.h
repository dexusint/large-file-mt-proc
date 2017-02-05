#pragma once

#include <string>

class Application {
public:
Application(int argc, char* argv[]);
Application(const Application& rhs) = delete;
Application& operator=(const Application& rhs) = delete;

int run();

private:
  std::string m_pathToFile;

};
