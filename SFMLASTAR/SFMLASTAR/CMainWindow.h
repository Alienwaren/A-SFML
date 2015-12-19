#ifndef CMainWindow_H
#define CMainWindow_H
#include <SFML\Window.hpp>
#include <SFML\System.hpp>
#include <SFML\Graphics.hpp>
#include <string>
class CMainWindow
{
public:
	CMainWindow(int width, int height, std::string title);
	CMainWindow(sf::VideoMode videoMode, std::string title);
	~CMainWindow();
	///
	///MAKE IMAGE MANAGER WHICH WILL MARK IMAGES TO BE READ AND THOSE WON'T!
	///
	void inline clearWindowAndDrawEverything()
	{
		window->clear();
		window->display();
	}
	int pollWindowEvents();
private:
	sf::RenderWindow *window;
	int windowWidth;
	int windowHeight;
	std::string windowTitle;
	sf::VideoMode *windowVideoMode;
};

#endif //CMainWindow_H
