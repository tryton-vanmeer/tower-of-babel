using Gtk;

public class GtkHelloWorld : Window
{
    private Button hello_button;

    public GtkHelloWorld()
    {
        this.title = "GTK Hello World";
        this.set_default_size(400, 300);
        this.destroy.connect(Gtk.main_quit);

        this.setup_view();
        this.setup_signals();
    }

    private void setup_view()
    {
        this.hello_button = new Button.with_label("Hello, World");

        var hbox = new Box(Orientation.HORIZONTAL, 0);

        hbox.pack_start(this.hello_button, true, false, 0);

        var vbox = new Box(Orientation.VERTICAL, 0);

        vbox.pack_start(hbox, true, false, 0);

        this.add(vbox);
    }

    private void setup_signals()
    {
        this.hello_button.clicked.connect (() => {
            this.hello_button.label = "Thank you";
        });
    }

    public static int main(string[] args)
    {
        Gtk.init(ref args);

        var window = new GtkHelloWorld();
        window.show_all();

        Gtk.main();
        return 0;
    }
}