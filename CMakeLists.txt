cmake_minimum_required(VERSION 3.21)
project(RayCaster LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(RayCaster src/main.cpp src/Header.h
    src/ConvertSketch.cpp
    src/ConvertSketch.h
    src/DegToRad.cpp
    src/DegToRad.h
    src/GetDegrees.cpp
    src/GetDegrees.h
    src/MapCollision.cpp
    src/MapCollision.h
    src/Player.cpp
    src/Player.h
    src/RadToDeg.cpp
    src/RadToDeg.h
    src/Menu.cpp
    src/Menu.h)
target_link_libraries(RayCaster PRIVATE sfml-audio sfml-graphics sfml-window sfml-system)
target_compile_features(RayCaster PRIVATE cxx_std_11)
if (WIN32 AND BUILD_SHARED_LIBS)
    add_custom_command(TARGET RayCaster POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:RayCaster> $<TARGET_FILE_DIR:RayCaster> COMMAND_EXPAND_LISTS)
endif()


add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
					COMMAND ${CMAKE_COMMAND} -E copy_directory
					${CMAKE_SOURCE_DIR}/src/Resources $<TARGET_FILE_DIR:${PROJECT_NAME}>/Resources)
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_BINARY_DIR}/install" CACHE PATH "..." FORCE)
endif()


install(TARGETS ${PROJECT_NAME} CONFIGURATIONS Debug DESTINATION RayCaster)
install(DIRECTORY src/Resources/ DESTINATION RayCaster/Resources)