#pragma once

enum PLAYER_ANIMATION_STATES {IDLE = 0, MOVING_LEFT, MOVING_RIGHT, MOVING_UP, MOVING_DOWN};
class Player
{
private:
	sf::Sprite sprite;
	sf::Texture textureSheet;
	sf::Clock animationTimer;

	//Animation
	short animState;
	sf::IntRect currentFrame;
	//Movement
	
	//Core
	void initVariables();
	void initTexture();
	void initSprite();
	void initAnimations();
public:
	Player();
	virtual ~Player();

	//Functions
	void updateMovement();
	void updateAnimation();
	void update();
	void render(sf::RenderTarget& target);
	//Functions
};
