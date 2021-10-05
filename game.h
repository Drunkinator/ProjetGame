#pragma once
#include <SFML/Graphics.hpp>
class Game
{
private :
    static Game instance_;
    public :
        static Game& GetInstance() {
            return instance_;
        }
    void Init() {
        sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            window.draw(shape);
            window.display();
        }
    };
    void Teardown();
    void Update();
    void Render();
    void Input();
    void Restart();
};

