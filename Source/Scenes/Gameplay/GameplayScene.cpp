#include "../Scene.h"
#include "../../Core.h"

#include "GameplayScene.h"


GameplayScene::GameplayScene(){
  sceneName = "Gameplay";
}

void GameplayScene::HandleEvent(SDL_Event _event){
  Scene::HandleEvent(_event);
  switch (_event.type) {
    case SDL_KEYDOWN:
      this->OnKeyDownEvent(_event.key);
  }
}

void GameplayScene::OnKeyDownEvent(SDL_KeyboardEvent _key){
  switch (_key.keysym.scancode) {
    case SDL_SCANCODE_ESCAPE:
      this->core->Quit();
      break;
    default:
      std::cout << "Key Sym - " << _key.keysym.sym <<" - Scancode "<< _key.keysym.scancode << '\n';
      break;
  }
}
