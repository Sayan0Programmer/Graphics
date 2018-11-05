#include<gtk/gtk.h>

int main(int argc, char *argv[]){

	gtk_init(&argc,&argv);
	GtkWidget *w;
	w = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(w, "delete-event", G_CALLBACK(gtk_main_quit), NULL);
	gtk_widget_show(w);
	gtk_main();

	return 0;
}
