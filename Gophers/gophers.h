#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_gophers.h"

class Gophers : public QMainWindow
{
    Q_OBJECT

public:
    Gophers(QWidget *parent = Q_NULLPTR);

private:
    Ui::GophersClass ui;
};
