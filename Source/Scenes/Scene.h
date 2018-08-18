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

  void virtual Init(Core *_core);

  void virtual Update();
  void virtual HandleEvent(SDL_Event _event);
  void virtual Render();
protected:
  const char *sceneName = "Empty";
  Core *core;
  Ambient *ambient;
  Character *character;
  Background *background;
};

#endif
