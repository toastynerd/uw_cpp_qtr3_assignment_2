#pragma once

#include <vector>
#include "Layer.h"

namespace VG
{
  class Scene
  {
    public:
      Scene(int scene_width, int scene_height);
      ~Scene();

      void addLayer(Layer& layer);
      void removeLayer(int index);
      void changeLayer(int old_index, int new_index);
    private:
      std::vector<Layer> my_layers;
      int my_width;
      int my_height;
  };
}
