#!/usr/bin/env python3

import sdl2.ext

# Init SDL
sdl2.ext.init()

# Create window
window = sdl2.ext.Window("SDL Square", size=(800, 600))
window.show()

processor = sdl2.ext.TestEventProcessor()
processor.run(window)
