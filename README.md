![play](https://user-images.githubusercontent.com/81354428/162616493-9badf698-f67d-472b-856d-9a4d6f0943f5.png)
![sample](https://user-images.githubusercontent.com/81354428/162616503-ad6d74ac-b327-40b2-8b5c-9f6c72c2304f.png)
![battle](https://user-images.githubusercontent.com/81354428/162616513-1e46dc5f-cc19-4b63-9a54-ce8ed0ac74b9.png)
![zombie](https://user-images.githubusercontent.com/81354428/162616518-53395b48-eedc-4154-a748-f27978d2f6de.png)
![zombie screen](https://user-images.githubusercontent.com/81354428/162616521-9719f41b-08fe-4f16-8d96-e2d4d2b357d0.png)
# Shoot-the-zombie

A Heads Up Display (HUD) that shows details such as the score, high score,
and bullets in clip, the number of bullets left, player health, and the number
of zombies left to kill.

The player will shoot zombies while frantically running away from them.
•
Move around a scrolling world using the WASD keyboard keys while aiming
the gun using the mouse.
•
In-between each level, the player will choose a "level-up" that will affect the
way the game needs to be played for the player to win.
•
The player will need to collect "pick-ups" to restore health and ammunition.
•
Each wave brings more zombies and a bigger arena to make it
more challenging.
There will be three types of zombies to splatter. They will have different attributes,
such as appearance, health, and speed. We will call them chasers, bloaters, and
crawlers. Take a look at the following annotated screenshot of the game to see some
of the features in action and the components and assets that make up the game

Here is some more information about each of the numbered points:
1. The score and hi-score. These, along with the other parts of the HUD, will be
drawn in a separate layer, known as a view, and represented by an instance
of the View class. The hi-score will be saved and loaded to a file.
2. A texture that will build a wall around the arena. This texture is contained
in a single graphic called a sprite sheet, along with the other background
textures (points 3, 5, and 6).
3. The first of two mud textures from the sprite sheet.
4. This is an "ammo pick-up." When the player gets this, they will be given
more ammunition. There is a "health pick-up" as well, from which the player
will receive more health. These pick-ups can be chosen by the player to be
upgraded in-between waves of zombies.
5. A grass texture, also from the sprite sheet.
6. The second mud texture from the sprite sheet.
7. A blood splat where there used to be a zombie.
8. The bottom part of the HUD. From left to right, there is an icon to represent
ammo, the number of bullets in the clip, the number of spare bullets, a health
bar, the current wave of zombies, and the number of zombies remaining for
the current wave.
9. The player's character.
10. A crosshair, which the player aims with the mouse.
11. A slow-moving, but strong, "bloater" zombie.
12. A slightly faster-moving, but weaker, "crawler" zombie. There is also
a "chaser zombie" that is very fast and weak. Unfortunately, I couldn't
manage to get one in the screenshot before they were all killed.
