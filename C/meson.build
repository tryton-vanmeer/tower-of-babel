project('tower-of-babel', 'c', default_options : ['warning_level=3'])

gtk4 = dependency('gtk4')
libadwaita = dependency('libadwaita-1')
sdl2 = dependency('sdl2')

executable('hello-world', 'src/hello-world.c')
executable('gtk-4-libadwaita', 'src/gtk-4-libadwaita.c', dependencies: [gtk4, libadwaita])
executable('sdl-square', 'src/sdl-square.c', dependencies: [sdl2])
