#pragma once

#include <QtWidgets/QDialog>
#include "ui_StudentLuncher.h"

class StudentLuncher : public QDialog
{
	Q_OBJECT

public:
	StudentLuncher(QWidget *parent = Q_NULLPTR);

private:
	Ui::StudentLuncherClass ui;
};
