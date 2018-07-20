#include "Core.h"



Core::Core(){

}
Core::~Core(){
    SDL_Quit();
}

void Core::Init(){
  if(SDL_Init(SDL_INIT_EVERYTHING) != 0){
    std::cout << "SDL Init error" << '\n';
    return;
  }
  window = SDL_CreateWindow("Plataformer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, fullscreen);
  if(!window){
    std::cout << "SDL Window error" << '\n';
    return;
  }
  isRunning = true;
  actualScene = new GameplayScene();
  actualScene->Init(this);
}

void Core::MainLoop(){
  while (isRunning) {
    this->HandleEvents();
    this->Update();
    this->Render();
  }
}

void Core::Update(){}

void Core::HandleEvents(){
  SDL_Event event;
  SDL_PollEvent(&event);
  switch (event.type) {
    case SDL_QUIT:
      isRunning = false;
      break;
    default:
      actualScene->HandleEvent(event);
      break;
  }
}

void Core::Render(){}
