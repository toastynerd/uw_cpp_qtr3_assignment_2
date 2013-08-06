#include "Scene.h"

namespace VG
{
  Scene::Scene(int scene_width, int scene_height)
  :my_width(scene_width),
  my_height(scene_height)
  {
  
  }

  Scene::~Scene(){}

  void Scene::addLayer(Layer& layer)
  {
    my_layers.push_back(layer);
  }

  void Scene::removeLayer(int index)
  {
    my_layers.erase(my_layers.begin() + index);
  }

  void Scene::changeLayer(int old_index, int new_index)
  {
    Layer tempLayer("temp layer");
    tempLayer = my_layers[old_index];

    my_layers.insert(my_layers.begin() + new_index, tempLayer);
    my_layers.erase(my_layers.begin() + old_index);
  }
}
