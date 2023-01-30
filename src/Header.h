#pragma once
#include <chrono>
#include <string>
/**
 * @brief Header файл с константами
 */
//!Угол обзора по вертикали
constexpr float FOV_HORIZONTAL = 90;
//!Угол обзора по горизонтали
constexpr float FOV_VERTICAL = 58.75f;
//!Скорость передвижения игрока
constexpr float MOVEMENT_SPEED = 2;
//!Число Пи
constexpr float PI = 3.141592653589793116f;
//!Дистанция рендера
constexpr float RENDER_DISTANCE = 1024;

//!Скорость поворота противников
constexpr float ENEMY_ROTATION_SPEED = 2;

//!Размер ячейки(клетки) в игре
constexpr unsigned char CELL_SIZE = 64;
//!Размер ячейки на миникарте
constexpr unsigned char MAP_CELL_SIZE = 8;
constexpr unsigned char MAP_GRID_CELL_SIZE = 16;
constexpr unsigned char MAP_HEIGHT = 32;
constexpr unsigned char MAP_WIDTH = 32;



//!Количество видов стен
constexpr unsigned char NUM_WALL_TYPES = 4;
//!Высота экрана по умолчанию
constexpr unsigned short SCREEN_HEIGHT = 1080;
//!Ширина экрана по умолчанию
constexpr unsigned short SCREEN_WIDTH = 1920;

//!Количество кнопок
constexpr unsigned char BUTTON_NUM = 11;
//!Количество уровней
constexpr unsigned char LEVELS_NUM = 11;


//!Если у нас 60 кадров в 1 секунде, то каждый кадр будет длится 16.667 мс
constexpr std::chrono::microseconds FRAME_DURATION(16667);

//!Типы ячееек
enum Cell
{
	Empty,
	Wall,
	Wall1,
	Instruction,
	Wall3
};


