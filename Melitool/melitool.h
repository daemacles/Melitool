#ifndef MELITOOL_H
#define MELITOOL_H

#include <opencv2/opencv.hpp>

#include <QtWidgets/QMainWindow>

#include "ui_melitool.h"

class Melitool : public QMainWindow
{
	Q_OBJECT

public:
	Melitool(QWidget *parent = 0);
	~Melitool();

	public slots:

    // Load image from disk and clear the scene
	void LoadImage(const QString &filename);

private:
	Ui::MelitoolClass ui;

	cv::Mat cv_img_;
    QGraphicsScene scene_;
	QImage img_;
};

#endif // MELITOOL_H
