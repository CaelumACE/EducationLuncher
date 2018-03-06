#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TeacherLuncher.h"

class TeacherLuncher : public QMainWindow
{
	Q_OBJECT

public:
	TeacherLuncher(QWidget *parent = Q_NULLPTR);

private:
	Ui::TeacherLuncherClass ui;
};
