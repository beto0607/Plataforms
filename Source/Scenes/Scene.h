#ifndef Scene_hpp
#define Scene_hpp


#include "Ambient.h"
#include "Character.h"
#include "Background.h"
#include "SDL2/SDL.h"

class Background;
class Character;
class Ambient;
class Core;
class Scene{
public:
  Scene();
  ~Scene();

  void Init(Core *_core);

  void Update();
  void HandleEvent(SDL_Event _event);
  void Render();
protected:
  const char *sceneName = "Empty";
  Core *core;
  Ambient *ambient;
  Character *character;
  Background *background;
};

#endif
