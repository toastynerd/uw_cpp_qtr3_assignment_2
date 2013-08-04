#include "TestHarness.h"
#include "../Parse.h"


// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested

TEST(ParseTrimAndEat, Parse)
{
  std::string stringOne = "Hello here is a string         \n";
  std::string testString = "Hello here is a string";
  Parse::trim(stringOne, " \n");
  CHECK_EQUAL(testString, stringOne);
}

