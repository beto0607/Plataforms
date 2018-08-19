#ifndef Platform_hpp
#define Platform_hpp

#include "../GameEntity.h"
class GameEntity;

class Platform: public GameEntity{
public:
  Platform(uint _id);
  virtual ~Platform();

  void Init();
  void Update();
  void Render();
  void HandleEvent(SDL_Event _event);
private:
};


#endif
