#include "QtGuiAddition.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiAddition w;
	w.show();
	return a.exec();
}
