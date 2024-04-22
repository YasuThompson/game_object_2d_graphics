## Assignment 2.1
Let's consider creating a "Safari Game" where players can observe wild animals using various types of vehicles. In this game, there will be various types of flora and fauna as well as vehicles. How should these objects be implemented in an object model with a monolithic class hierarchy structure? Next, let's consider implementing the same game using a component-based game object model. How would you implement it? Among these two approaches, which one would be more suitable for this game?

## Assignment 2.2
The current AnimSpriteComponent class only supports one animation, which stores all sprites in a single array format. Let's modify this class to support multiple different animations. Each animation will be defined as a range of textures within the array. Let's use the CharacterXX.png files in the Chapter02/Assets directory for testing. Next, let's support non-looping animations. When defining an animation as a "range of textures," allow specifying whether it loops or not. In non-looping animations, the animation should not return to the first texture at the end.

## Assignment 2.3
One approach to generating 2D scenes is using a tile map. In this method, an image file containing a series of tiles with the same dimensions is used. This image file is called a tile set. 2D scenes are created by combining many tiles. The tile map for this assignment was generated using Tiled (http://www.mapeditor.org), an excellent tool for generating tile sets and tile maps. Figure 2.7 shows part of an example tile set. Here, the tile map is in CSV file format. A series of files named MapLayerX.csv in the Chapter02/Assets directory contains three layers (Layer 1 is the closest, Layer 3 is the farthest). Tiles.png contains the tile set. Each row in the CSV file contains a series of numbers like this: -1,0,5,5,5,5 -1 means there is no image for that tile (so nothing is rendered for that tile). The other numbers refer to individual tiles included in the tile set. Numbers are counted from left to right and top to bottom. In this tile set, "Tile 8" is the leftmost tile in the second row. Let's create a new component called TileMapComponent that inherits from SpriteComponent. It will need a function to read the CSV file of the tile map. Override the Draw function to draw each tile from the tile set's texture. To draw only a part of the texture, use the srcrect parameter of SDL_RenderCopyEx. This way, you can draw only one tile referenced from the tile set's texture, not the entire texture.



# Study notes
- 2.2
    - *Sprite*: A visual object for 2D video games. Used for expressing dynamic objects such as characters, backgrounds, and others. 
    - A 2D video game usually has hundreds of sprites. 
    - *PNG*: a compressed image format. But hardwares usually cannot draw png natively. (Note: iOS uses PVR, Xbox uses DXT).
    
    
