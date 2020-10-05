#!/usr/bin/env python3

import sdl2.ext

# Init SDL
sdl2.ext.init()

# Create window
window = sdl2.ext.Window("SDL Square", size=(800, 600))
window.show()

factory = sdl2.ext.SpriteFactory(sdl2.ext.SOFTWARE)
square = factory.from_color(sdl2.ext.Color(255, 0, 0), size=(256, 256))
square.position = (400 - 128), (300 - 128)

spriterenderer = factory.create_sprite_render_system(window)
spriterenderer.render(square)

processor = sdl2.ext.TestEventProcessor()
processor.run(window)

sdl2.ext.quit()
