#include<gtk/gtk.h>

void button_clicked(GtkWidget *button, gpointer data)
{
    gtk_button_set_label(GTK_BUTTON(button), "Thank you");
}

void setup_view(GtkWidget *window)
{
    GtkWidget *button = gtk_button_new_with_label("Hello, World");
    g_signal_connect(G_OBJECT(button), "clicked",
        G_CALLBACK(button_clicked), NULL);

    GtkWidget *hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_box_pack_start(GTK_BOX(hbox), button, TRUE, FALSE, 0);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_box_pack_start(GTK_BOX(vbox), hbox, TRUE, FALSE, 0);

    gtk_container_add(GTK_CONTAINER(window), vbox);
}

GtkWidget* setup_window()
{
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "GTK Hello World");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);
    g_signal_connect(window, "destroy",
        G_CALLBACK(gtk_main_quit), NULL);

    setup_view(window);

    return window;
}

int main(int argc, char **argv)
{
    gtk_init(&argc, &argv);

    GtkWidget *window = setup_window();
    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}
