#ifndef MELITOOL_H
#define MELITOOL_H

#include <QtWidgets/QMainWindow>
#include "ui_melitool.h"

class Melitool : public QMainWindow
{
	Q_OBJECT

public:
	Melitool(QWidget *parent = 0);
	~Melitool();

private:
	Ui::MelitoolClass ui;
};

#endif // MELITOOL_H
