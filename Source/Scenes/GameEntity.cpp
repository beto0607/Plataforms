#include "GameEntity.h"

GameEntity::GameEntity (uint _id, const char * _name){
  this->id = _id;
  this->isActive = true;
  this->isDrawable = true;
  this->name = _name;
  this->posX = 0;
  this->posY = 0;
  this->width = 1;
  this->height = 1;
  this->rotationX = 0;
  this->rotationY = 0;
  this->rotationZ = 0;
  this->texture = NULL;
}
GameEntity::~GameEntity (){

}

void GameEntity::Init(){

}
void GameEntity::Update(){

}
void GameEntity::Render(){

}
void GameEntity::HandleEvent(SDL_Event _event){

}
