#include "Attribute.h"

namespace Attribute
{
  Attribute::Attribute(std::string description, std::string value)
    :my_description(description),
    my_value(value)
  {

  }

  std::string Attribute::getDescription()
  {
    return my_description;
  }

  std::string Attribute::getValue()
  {
    return my_value;
  }
}

