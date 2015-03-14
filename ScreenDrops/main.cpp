#include <SFML/Graphics.hpp>

class screenSquare {
public:
	int saturation;
	sf::Time dripTime;

	screenSquare(){
		saturation = 0;
		dripTime = sf::seconds(0);
	}
};

int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 768), "Drips");

	screenSquare windowScreen[200][200];
	windowScreen[0][100].saturation = 255;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();
	}

	return 0;
}