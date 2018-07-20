#include "Scene.h"
#include <iostream>
Scene::Scene(){}
Scene::~Scene(){}
void Scene::Init(Core *_core){
  this->core = _core;
}
void Scene::Update(){}
void Scene::HandleEvent(SDL_Event _event){
  switch (_event.type) {
    case SDL_KEYDOWN:
      std::cout << "Key press detected"<< sceneName << "\n";
      break;
  }
}
void Scene::Render(){}
