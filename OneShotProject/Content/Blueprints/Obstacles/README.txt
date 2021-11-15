To create any moving obstacle (spikes, platform, crusher, etc):

	- Place it in the level, in desired start position.

	- Choose its movement amount in the X Y or Z direction (only one direction)

	- Choose its move speed. It's move amount must be divisible by the move speed.

		~For example: if you set move amount to 200 in the X direction. you can set move speed to 2, 5, 10, 20 etc.
	
	- Set Pause Start and Pause End. These are in ticks so 60 = 1 second.
	
	- There you go!
	
Obstacle Specific notes:

Moving Platform:

	- You can give more than one movement direction as long as moveX/speedX == moveY/speedY == moveZ/speedZ (unless they're 0 obviously)
	
Crusher:

	- Starts at the bottom, set pause end higher than pause start. (pause end is the time it's up)