#include "QtGuiAddition.h"

QtGuiAddition::QtGuiAddition(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	connect(ui.btAddition, SIGNAL(clicked()), this, SLOT(addition()));
}
void QtGuiAddition::addition() {
	float Summand1;
	float Summand2;
	float Summe;

	QString strSummand1 = ui.tbSummand1->text();
	QString strSummand2 = ui.tbSummand2->text();

	Summand1 = strSummand1.toFloat();
	Summand2 = strSummand2.toFloat();

	Summe = Summand1 + Summand2;

	QString strSumme = QString::number(Summe);

	ui.tbSumme->setText(strSumme);
}
