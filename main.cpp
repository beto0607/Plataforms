#include "Source/Core.h"
#include <iostream>
int main( int argc, char* args[] )
{
  Core *core = new Core();
  core->Init();
  core->MainLoop();
  return 0;
}
