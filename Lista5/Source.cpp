#include "SceneManager.h"

using namespace std;

int main()
{
    SceneManager* sceneManager = new SceneManager();
    sceneManager->initialize(1200, 900, "CoolScene", 
        "../textures/Ahh.jpg");

    sceneManager->run(Ponto3d(1,1,1));
}