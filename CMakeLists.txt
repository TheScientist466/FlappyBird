cmake_minimum_required(VERSION 3.0.0)
project(FlappyBird VERSION 0.1.0)

include(CTest)
enable_testing()


find_package(SFML 2.5.1 COMPONENTS audio graphics window system REQUIRED)

FILE(
  GLOB
  files
  "src/*.cpp"
)

add_executable(${PROJECT_NAME} ${files})

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-audio)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
