CC=g++

test:
	$(CC) -o run_tests CppUnitLite/Main.cpp CppUnitLite/Failure.cpp CppUnitLite/Test.cpp CppUnitLite/TestRegistry.cpp CppUnitLite/TestResult.cpp CppUnitLite/SceneLayerTest.cpp Parse.cpp
	./run_tests

scene_layer:
	

all:
