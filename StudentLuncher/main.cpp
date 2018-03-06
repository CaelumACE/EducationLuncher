#include "StudentLuncher.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	StudentLuncher w;
	w.show();
	return a.exec();
}
