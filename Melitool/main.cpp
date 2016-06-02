#include "melitool.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Melitool w;
	w.show();
	return a.exec();
}
