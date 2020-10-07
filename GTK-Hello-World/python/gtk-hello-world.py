#!/usr/bin/env python3

import gi

gi.require_version("Gtk", "3.0")
from gi.repository import Gtk  # noqa: E402


class GtkHelloWorld(Gtk.Window):
    def __init__(self):
        Gtk.Window.__init__(self, title="GTK Hello World")
        self.set_default_size(400, 300)
        self.connect("destroy", Gtk.main_quit)

        self.setup_view()

    def setup_view(self):
        self.button = Gtk.Button(label="Hello, World")
        self.button.connect("clicked", self.on_button_clicked)

        hbox = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL)
        hbox.pack_start(self.button, True, False, 0)

        vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
        vbox.pack_start(hbox, True, False, 0)

        self.add(vbox)

    def on_button_clicked(self, button):
        button.set_label("Thank you")


if __name__ == "__main__":
    window = GtkHelloWorld()
    window.show_all()

    Gtk.main()