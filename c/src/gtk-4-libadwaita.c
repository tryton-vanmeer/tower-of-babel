#include <adwaita.h>

static void print_hello(GtkWidget *widget, gpointer data) {
  g_print("Hello, World!\n");
}

static void activate(GtkApplication *app) {
  GtkWidget *window = gtk_application_window_new(app);
  GtkWidget *button = gtk_button_new_with_label("Hello World");

  g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);
  g_signal_connect_swapped(button, "clicked", G_CALLBACK(gtk_window_destroy), window);

  gtk_window_set_title(GTK_WINDOW(window), "Hello");
  gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);
  gtk_window_set_child(GTK_WINDOW(window), button);
  gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char *argv[]) {
  g_autoptr(AdwApplication) app = NULL;

  app = adw_application_new("dev.trytonvanmeer.tower-of-babel.Hello", G_APPLICATION_FLAGS_NONE);

  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

  return g_application_run(G_APPLICATION(app), argc, argv);
}
