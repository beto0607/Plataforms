SOURCES = Source/Core.cpp Source/Scenes/Scene.cpp Source/Scenes/Gameplay/GameplayScene.cpp Source/Scenes/Character.cpp Source/Scenes/Ambient.cpp Source/Scenes/Character.cpp Source/Scenes/Background.cpp 

all:
	g++ -o Built/main.out main.cpp $(SOURCES) -lSDL2
