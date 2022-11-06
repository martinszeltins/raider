#include "raider-application.h"

int main (int argc, char *argv[])
{
	g_autoptr(RaiderApplication) app = NULL;

	app = raider_application_new ("com.github.ADBeveridge.Raider", G_APPLICATION_HANDLES_OPEN);
	return g_application_run (G_APPLICATION (app), argc, argv);
}
