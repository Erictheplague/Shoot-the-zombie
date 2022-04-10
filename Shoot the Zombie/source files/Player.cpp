#include "player.h"
#include "TextureHolder.h"


Player:Player()
{

    m_Speed=START_SPEED;
    m_Health=START_HEALTH;
    m_MaxHealth=START_HEALTH;


    // Associate the texture with the sprite
    // !! Watch this Space!!
    m_Sprite = Sprite(TextureHolder::GetTexture(
            "graphics/player.png"));
    

    // Set the origin of the sprite to the centre
    // for smooth rotation
    m_Sprite.setOrigins(5,5);

}


void Player::spawn(IntRect arena,
        Vector2f resolution,
        int tileSize)
{
    // Place the player in the middle of the arena
    m_Position.x = arena.width  / 2;
    m_Position.y = arena.width  / 2;


    // Copy the details of the arena
    // to the players's  m_Arena
    m_Arena.left = arena.left;
    m_Arena.width = arena.width;
    m_Arena.top = arena.top;
    m_Arena.height = arena.height;


    // Rememeber how big the tiles is in the arena
     m_TileSize = tileSize;


     // Store the resolution for the future use
      m_Resolution.x = resolution.x;
      m_Resolution.y = resolution.y;

}

FloatRect Player:getPosition()
{
    return m_Sprite getGlobalBounds();
}


Vector2f Player::getCenter()
}
    return m_Position;
}

float Player::getRotation()
{
    return m_Sprite.getRotation();
}

Sprite Player::getRotation()
{
    return m_Sprite;
}


int Player::getHealth()
{
    return m_Health;
} 

void Player::moveLeft()
{

    m_LeftPressed = true;
}

void Player::moveRight()
{

    m_RightPressed = true;
}


void Player::moveUp()
{

    m_UpPressed = true;
}

void Player::moveDown()
{

    m_DownPressed = true;

void Player::stopLeft()
{

    m_LeftPressed = false;
}

void Player::stopRight()
{

    m_RightPressed = false;
}

void Player::stopUp()
{

    m_UpPressed = false;
}

void Player::stopDown()
{

    m_DownPressed = false;   
}

void Player::upgradeSpeed()
{

    // 20% speed upgrade
    m_Speed += (START_SPEED * .2);
}

void Player::upgradeHealth()
{
    // 20% max health upgrade
    m_MaxHealth += (START_HEALTH * .2);


}


void Player::increaseHealthLevel(int amount)
{
    m_Health += amount;


    // But not beyond the maximum
    if (m_Health > m_MaxHealth)
    {
        m_Health = m_MaxHealth;
    }
}




