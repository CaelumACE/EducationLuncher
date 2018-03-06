#include "TeacherLuncher.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TeacherLuncher w;
	w.show();
	return a.exec();
}
