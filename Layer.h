#pragma once

#include <vector>
#include <string>
#include "VectorGraphic.h"

namespace VG
{
  class Layer
  {
    public:
      Layer(std::string description);
      ~Layer();
      void addGraphic(VectorGraphic& graphic, Point& location);
      void removeGraphic(int index);
    private:
      std::vector<VG::VectorGraphic> my_graphics;
      std::vector<VG::Point> my_locations;
      std::string my_description;
  };
}
