#include <iostream>

#include "application.h"

using namespace std;

Application::Application(int argc, char* argv[]) {

  if(argc != 2) {
    cout << "Please provide a file name as first parameter of app" << endl;
  }
  string programPath(argv[0]);
  size_t pos = programPath.find_last_of("/\\");
  m_pathToFile =string(programPath.substr(0, pos) + '/' + argv[1]);

  cout << "Path to file: " << m_pathToFile << endl;
}

int Application::run() {
  getchar();

  return 0;
}


