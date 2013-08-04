#pragma once

#include <string>

namespace Attribute
{
  class Attribute
  {
    Attribute(std::string description, std::string value);
    ~Attribute();
    std::string getDescription();
    std::string getValue();

  private:
    std::string my_description;
    std::string my_value;
  };
}
