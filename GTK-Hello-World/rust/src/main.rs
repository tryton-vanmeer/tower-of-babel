extern crate gtk;
extern crate gio;

use gtk::prelude::*;
use gio::prelude::*;

use gtk::{Application, ApplicationWindow};

fn main()
{
    let application = Application::new(
        Some("io.github.tryton-vanmeer.tower-of-babel.gtk-hello-world"),
        Default::default(),
    ).expect("Failed to initialize GTK application");

    application.connect_activate(|app| {
        let window = ApplicationWindow::new(app);
        window.set_title("GTK Hello World");
        window.set_default_size(400, 300);

        window.show_all();
    });

    application.run(&[]);
}
