SDL = -lSDL2 -lSDL_image

BUILT_FOLDER = ./Built
GAMEPLAY = Source/Scenes/Gameplay/GameplayScene.cpp Source/Scenes/Gameplay/Platform.cpp
SOURCES = Source/Core.cpp Source/Scenes/Scene.cpp Source/Scenes/GameEntity.cpp


all:
	g++ -o $(BUILT_FOLDER)/main.out  $(SOURCES) $(GAMEPLAY) main.cpp $(SDL)
