## Building
There are options so that you may include or exclude whatever components you wish
Such as building only the game and GUI projects
BUILD_GAME_RELEASE, will compile pretty much everything in release mode.

## Game
Game files, like resources,object definitions, etc. Also, this is the actual entrypoint.

## Engine
Where the base engine and tools are. Also, the engine is essentially a static library for `game`.

## chixLib
A static library that contains utils like linear math and such

## chixGUI
A static library that contains the utilities to design

I chose static for these libraries so they can be linked into the actual program.