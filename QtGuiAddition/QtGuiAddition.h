#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiAddition.h"

class QtGuiAddition : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiAddition(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiAdditionClass ui;

private slots:
	void addition();
};
