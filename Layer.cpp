#include "Layer.h"

namespace VG
{
  Layer::Layer(std::string description)
  :my_description(description)
  {
  
  }

  Layer::~Layer()
  {

  }

  void Layer::addGraphic(VectorGraphic& graphic, Point& location)
  {
    my_graphics.push_back(graphic);
    my_locations.push_back(location);
  }

  void Layer::removeGraphic(int index)
  {
    my_graphics.erase(my_graphics.begin() + index);
    my_locations.erase(my_locations.begin() + index);
  }
}
