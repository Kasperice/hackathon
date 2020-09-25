#include "Brick.hpp"
#include "Headers.hpp"

Brick::Brick(float pos_x, float pos_y) {
    brick_.setSize(size_);
    brick_.setPosition(pos_x, pos_y);
    brick_.setFillColor(sf::Color::Blue);
}

void Brick::update() {  // everything that changes in regards to brick. Destroying, changing color etc.
}

void Brick::destroyBrick() {
    isDestroyed_ = true;
}

void Brick::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    states.transform *= getTransform();
    target.draw(brick_, states);
}