#pragma once

#include <SFML/Graphics.hpp>
#include "Entity.hpp"

constexpr float blockWidth{83.f};
constexpr float blockHeight{30.f};
constexpr int spaceBetweenBlocks{2};
constexpr int spaceFromTop{100};
constexpr int blocksCol{15};
constexpr int blocksRow{5};

class Brick : public Entity {
public:
    Brick(float pos_x, float pos_y);
    void update() override;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
    sf::RectangleShape brick_;
    sf::Vector2f position_{};
    sf::Vector2f size_{blockWidth, blockHeight};
};
