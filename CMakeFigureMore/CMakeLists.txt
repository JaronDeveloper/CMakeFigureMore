# CMakeList.txt: проект CMake для CMakeFigureMore; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeFigureMore "CMakeFigureMore.cpp" "CMakeFigureMore.h" "EquilateralTriangle.cpp" "FiguresCpp.cpp" "IsoscelesTriangle.cpp" "Parallelogram.cpp" "Quadrilateral.cpp" "Rectangle.cpp" "Rhombus.cpp" "RightRriangle.cpp" "Square.cpp" "Triangle.cpp" "EquilateralTriangle.h" "FiguresH.h" "IsoscelesTriangle.h" "Parallelogram.h" "Quadrilateral.h" "Rectangle.h" "Rhombus.h" "RightRriangle.h" "Square.h" "Triangle.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeFigureMore PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
