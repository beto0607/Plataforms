#ifndef GameplayScene_hpp
#define GameplayScene_hpp

#include "../Scene.h"
#include <iostream>
class GameplayScene :  public Scene{
public:
  GameplayScene();
  ~GameplayScene();

  void HandleEvent(SDL_Event _event);
private:
  void OnKeyDownEvent(SDL_KeyboardEvent _key);

};


#endif
