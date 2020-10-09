extern crate gtk;

use gtk::prelude::*;

use std::{process};

pub struct GtkHelloWorld
{
    window: gtk::Window
}

impl GtkHelloWorld
{
    pub fn new() -> Self
    {
        let window = gtk::Window::new(gtk::WindowType::Toplevel);
        window.set_title("GTK Hello World");
        window.set_default_size(400, 300);

        window.connect_delete_event(move |_, _| {
            gtk::main_quit();
            gtk::Inhibit(false)
        });

        // Setup view
        let button = gtk::Button::with_label("Hello, World");
        button.connect_clicked(move |button| {
            button.set_label("Thank you");
        });

        let hbox = gtk::Box::new(gtk::Orientation::Horizontal, 0);
        hbox.pack_start(&button, true, false, 0);

        let vbox = gtk::Box::new(gtk::Orientation::Vertical, 0);
        vbox.pack_start(&hbox, true, false, 0);

        window.add(&vbox);

        GtkHelloWorld { window }
    }
}

fn main()
{
    if gtk::init().is_err()
    {
        eprintln!("failed to initialize GTK Application");
        process::exit(1);
    }

    let window = GtkHelloWorld::new();
    window.window.show_all();

    gtk::main();
}
