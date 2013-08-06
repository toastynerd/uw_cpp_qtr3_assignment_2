#pragma once

#include "VectorGraphic.h"
#include "Attribute.h"
#include "Element.h"
#include <iostream>

namespace VG
{
  template<typename T>
  class XMLParser
  {
    T fromXML( std::istream& xmlSource);

    void toXML(std::ostream& os, const T& Source);
  }
}
