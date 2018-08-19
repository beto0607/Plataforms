#ifndef GameEntity_hpp
#define GameEntity_hpp

#include "SDL2/SDL.h"

#include <iostream>

class Scene;
class GameEntity {
public:
  GameEntity (uint _id, const char *_name);
  virtual ~GameEntity ();

  void virtual Init();
  void virtual Update();
  void virtual Render();
  void virtual HandleEvent(SDL_Event _event);
private:
  bool isActive;
  bool isDrawable;
  const char *name;
  uint id;
//POSITION
  float posX;
  float posY;
//Scale
  float width;
  float height;
//Rotation
  float rotationX;
  float rotationY;
  float rotationZ;
//Texture
  SDL_Texture *texture;
  SDL_Surface *surface;
};
#endif
