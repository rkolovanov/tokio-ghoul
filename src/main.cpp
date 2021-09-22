#include <iostream>
#include <SFML/Audio.hpp>

void delay(const sf::Time& time) {
    sf::Clock clock;
    while (clock.getElapsedTime().asSeconds() < time.asSeconds()) {}
}

int main() {
    int counter = 1000;
    sf::Music music;

    if (!music.openFromFile("resources/toxin.wav")) {
        std::cerr << "Cannot open file 'resources/toxin.wav'.\n";
        return 0;
    }

    music.play();
    delay(sf::seconds(18));
    std::cerr << "\033[01;31mЯ... ";
    delay(sf::seconds(3));
    std::cerr << "гуль\n";

    while (music.getStatus() == sf::Music::Playing) {
        delay(sf::milliseconds(100));
        std::cerr << counter << " - 7 = " << counter - 7 << "\n";
        counter -= 7;
    }

    return 0;
}