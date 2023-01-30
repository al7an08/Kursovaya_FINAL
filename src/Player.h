#pragma once
#include "Header.h"
#include "SFML/Graphics.hpp"
#include "DegToRad.h"
#include <array>
/**
 * @brief Класс игрока
 */

class Player
{
private:
	//!Направление взгляда игрока по горизонтали
	float direction_horizontal;
	//!Направление взгляда игрока по вертикали
	float direction_vertical;
	//!Координата x положения игрока на карте
	float x;
	//!Координата y положения игрока на карте
	float y;
	//!Количество очков здоровья игрока
	float hp;
	//!Массив в котором хранятся расстояния до препятсвий 
	std::array<float, SCREEN_WIDTH> view_rays;
	//!Спрайт иконки игрока на карте
	sf::Sprite map_player_sprite;
	//!Текстура иконки игрока на карте
	sf::Texture map_player_texture;
	//!Массив в котором хранятся текстуры всех видов стен
	std::array<sf::Texture, NUM_WALL_TYPES> wall_textures;
	//!Массив в котором хранятся спрайты всех видов стен
	std::array<sf::Sprite, NUM_WALL_TYPES> wall_sprites;
	
public:
	/**
	 * @brief Конструктор класса Player
	 * @param i_x координата x
	 * @param i_x координата y
	 */
	Player(float i_x, float i_y, float hp);
	/**
	 * @brief Метод, рисующий мини-карту
	 * @param i_window окно в котором будет отрисовываться мини-карта
	 */
	void draw_map(sf::RenderWindow& i_window);
	/**
	 * @brief Метод, рисующий изображение, небо, пол и стены
	 * @param i_window окно в котором будет отрисовываться изображение
	 * @param i_map двумерный массив в котором хранится карта уровня
	 */
	void draw_screen(sf::RenderWindow& i_window, const std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map);
	/**
	 * @brief Метод, меняющий координаты игрока
	 * @param i_x новая координата x
	 * @param i_x новая координата y
	 */
	void set_position(float i_x, float i_y);
	/**
	 * @brief Метод, который считывает изменение положение игрока, а также просчитывает коллизию
	 * @param i_window окно в котором будет отрисовываться изображение
	 * @param i_map двумерный массив в котором хранится карта уровня
	 */
	void update(const std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map, const sf::RenderWindow& i_window);
};

