////////////////////////////////////////////////////////////
// Button.h
//
// Uses Button.cpp
////////////////////////////////////////////////////////////
#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics.hpp>
#include "Clickable.h"
#include "Hoverable.h"
#include <iostream>

using namespace std;
using namespace sf;


class Button : public Drawable ,public Clickable , public Hoverable 
{
public:
	////////////////////////////////////////////////////////////
	/// \brief Default Constructor
	///
	/// Creates an empty button
	///
	////////////////////////////////////////////////////////////
	Button();

	////////////////////////////////////////////////////////////
	/// \brief Overloaded Constructor
	///
	/// Creates the button with its parameteres
	///
	/// \param text string Text that is displayed on the button
	/// \param pos sVector2f position of the button
	/// \param size sVector2f size of the button
	/// \param resolutionScale sVector2f size of button relative to the screen
	/// \param textureName string name of the button texture
	////////////////////////////////////////////////////////////
	Button(string text,Vector2f pos, Vector2f size,Vector2f resolutionScale, string textureName);


	// \brief Updates text on button
	// \param text string of the new text
	void setText(string text);

	////////////////////////////////////////////////////////////
	/// \brief draw function
	///
	/// draws the Buttons sprite and text
	///
	////////////////////////////////////////////////////////////
	void draw(RenderTarget& target, RenderStates states) const;

protected:
	///////////////////////////////////////////////////////////
	/// \brief Text for the button
	////////////////////////////////////////////////////////////
	Text m_sfButtonText;

	///////////////////////////////////////////////////////////
	/// \brief Text for the button
	////////////////////////////////////////////////////////////
	String m_sButtonText;

	///////////////////////////////////////////////////////////
	/// \brief Texture for the button
	////////////////////////////////////////////////////////////
	Texture m_sfTexture;

	///////////////////////////////////////////////////////////
	/// \brief Sprite for the button
	////////////////////////////////////////////////////////////
	Sprite m_sfSprite;

	///////////////////////////////////////////////////////////
	/// \brief Rect for the button
	////////////////////////////////////////////////////////////
	RectangleShape m_sfRect;

	///////////////////////////////////////////////////////////
	/// \brief font for the button
	////////////////////////////////////////////////////////////
	Font m_sfFont;

private:

	///////////////////////////////////////////////////////////
	/// \brief Size of button relative to the screen
	////////////////////////////////////////////////////////////
	Vector2f m_sfResolutionScale;

};
#endif

////////////////////////////////////////////////////////////
/// \class Button.h
///
/// Button is an object class that inherests from clicable and drawbale
///
/// objects that the user click on should be a Button
///
/// it contains what the text on the button should say and the sprite that will be drawn
///
/// Usage example:
/// \code
/// 
/// Button StartGame;
/// if(StartGame.bIsclicked)
/// {
///		Startgame();
///
///	}
/// 
/// \endcode
///
////////////////////////////////////////////////////////////

