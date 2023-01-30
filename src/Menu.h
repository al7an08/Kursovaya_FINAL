#pragma once
#include "SFML/Graphics.hpp"
#include <array>
#include "Header.h"

/**
 * @brief Класс меню
 */
class Menu
{
private:
	//!Массив с текстурами кнопок
	std::array<sf::Texture, BUTTON_NUM> Buttons_Texture;

	//!Поле, значение которого показывет открыто ли меню
	bool isMenu = 1;
	//!Поле, значение которого показывет поменялся ли уровень
	bool isLevelChanged = false;
	//!Поле, использующеся как номер кнопки для нажатия
	int menuNum;
	//!Режим меню, 1 - главное меню, 2 - меню выбора разрешения, 3 - меню выбора уровня
	int menuMode = 1;
	//!Во сколько раз выбранное разрешение меньше разрешения по умолчанию
	float SCREEN_RESIZE = 1.f;
	//!Номер загружаемого уровня
	int level_num = 1;

public:
	/**
     * @brief Контструктор класса меню
    */
	Menu();
	/**
	 * @brief Метод, рисующий меню
	 * @param i_window окно в котором будет отрисовываться меню
	 */
	void DrawMenu(sf::RenderWindow& i_window);
	/**
	 * @brief Метод, возвращающий значение поля isMenu
	 * @return bool открыто ли меню
	 */
	bool IsOpen();
	/**
	 * @brief Метод, выставляющий значение поля isMenu на true
	 */
	void SetIsOpen();
	/**
	 * @brief Метод, меняющий режим меню
	 */
	void Set_mode(int mode);
	/**
	 * @brief Метод, возвращающий SCREEN_RESIZE
	 * @return SCREEN_RESIZE
	 */
	float Get_Screen_Resize();
	/**
	 * @brief Метод, выставляющий SCREEN_RESIZE
	 * @param a новое значение SCREEN_RESIZE
	 */
	void Set_Screen_Resize(float a);
	/**
	 * @brief Метод, возвращающий значение поля isLevelChanged
	 * @return bool поменялся ли уровень
	 */
	bool IsLevelChanged();
	/**
	 * @brief Метод, возвращающий номер уровня
	 * @return int номер уровня
	 */
	int Get_Level_Num();
	/**
	 * @brief Метод, выставляющий значение поля isLevelChanged на true
	 */
	void set_is_level_changed();
};

