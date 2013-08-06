CC=g++

test:
	$(CC) -o run_tests CppUnitLite/Main.cpp CppUnitLite/Failure.cpp CppUnitLite/Test.cpp CppUnitLite/TestRegistry.cpp CppUnitLite/TestResult.cpp CppUnitLite/SceneLayerTest.cpp Parse.cpp Attribute.cpp Element.cpp Layer.cpp VectorGraphic.cpp Point.cpp Scene.cpp
	./run_tests

scene_layer:
	

all:
