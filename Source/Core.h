#ifndef Core_hpp
#define Core_hpp

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "./Scenes/Gameplay/GameplayScene.h"
#include <iostream>

class Scene;
class Core{
public:
  Core();
  ~Core();

  void Init();
  void MainLoop();
  void Quit();
private:
  void Update();
  void HandleEvents();
  void Render();
  SDL_Window *window;
  SDL_Renderer *renderer;

  Scene *actualScene;

  GameplayScene *gameplayScene;

  bool isRunning;
  int fullscreen = 0;
};

#endif
