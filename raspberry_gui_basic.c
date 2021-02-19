/* 
   including <gtk/gtk.h> header file which contains the functions like -> 
   gtk_init, gtk_window_new, gtk_widget_show and gtk_main()

*/

#include <gtk/gtk.h>

int main (int argc, char *argv[]){
  /*
     we need to call gtk_init at the start of every GTK program this initialises all
     the internal variables used by GTK library. 	
 */

  gtk_init (&argc, &argv);

  /*
	the below "gtk_window_new" creates GTKWINDOW
	then gtk_widget_show, shows the gtk_window_new which just has been created
 */

  GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_widget_show(win);
  gtk_main();
  /*
   gtk_main() call runs the main loop of GTK. which hands control of the program 
   in the hands of GTK. then processes any user-events like button click. 
 */

  return 0;	
}
