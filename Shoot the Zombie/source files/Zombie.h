#pragma once
#include "Zombie.h"
#include <SFML/Graphics.hpp> 


using namespace sf;


int createBackground(VertexArray& rVA, IntRect arena);
Zombie* createHorde(int numZombies, IntRect arena);


class Zombie
{
private:
   // How fast is each zombie type?
   const float BLOATER_SPEED = 100;
   const float CHASER_SPEED = 50;
   const float CRAWLER_SPEED = 10;

   // How tough is each zombie type
   const float BLOATER_HEALTH = 10;
   const float CHASER_HEALTH = 5;
   const float CRAWLER_HEALTH = 2;

  // Make each zombie vary its speed slightly
   const int MAX_VARRIANCE = 20;
  const int OFFSET = 100 - MAX_VARRIANCE;

  // Where is this zombie?
  Vector2f m_Position;

  // A sprite for the zombie
  Sprite m_Sprite;

  // How fast can this one run/crawl?
  float m_Speed;

  // How much health has it got?
   float m_Health;

   // Is it still alive?
   bool m_Alive;
   // Public prototypes go here
};
public:
   // Handle when a bullet hits a zombie
   bool hit();

   // Find out if the zombie is alive
   bool isAlive();

   // Spawn a new zombie
   void spawn(float startX, float startY, int type, int seed);

  // Return a rectangle that is the position in the world
   FloatRect getPosition();

  // Get a copy of the sprite to draw
   Sprite getSprite();

  // Update the zombie each frame
   void update(float elapsedTime, Vector2f playerLocation);


};

