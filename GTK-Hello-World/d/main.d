import gtk.Main;
import gtk.MainWindow;
import gtk.Box;
import gtk.Button;


class GtkHelloWorld : MainWindow
{
    this()
    {
        super("GTK Hello World");
        setDefaultSize(400, 300);

        setup_view();
    }

    void setup_view()
    {
        auto button = new Button("Hello, World");
        button.addOnClicked(delegate(Button) {
            button.setLabel("Thank you");
        });

        auto hbox = new Box(Orientation.HORIZONTAL, 0);
        hbox.packStart(button, true, false, 0);

        auto vbox = new Box(Orientation.VERTICAL, 0);
        vbox.packStart(hbox, true, false, 0);

        add(vbox);
    }
}


void main(string[] args)
{
    Main.init(args);

    auto window = new GtkHelloWorld();
    window.showAll();

    Main.run();
}