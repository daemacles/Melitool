#include "melitool.h"

#include <qfiledialog.h>
#include <QGraphicsPixmapItem>

Melitool::Melitool(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

//	QObject::connect(
//		ui.load_image_button_, &QPushButton::clicked,
//		this, &Melitool::LoadImage
//	);

	QObject::connect(
		ui.load_image_button_, &QPushButton::clicked,
		[this]() { 
		QString filename = QFileDialog::getOpenFileName(
			this, 
			"Select Image",
			"",
			"Image files (*.jpg *.jpeg *.png *.gif *.tiff)"
			);
		this->setWindowTitle(QString("Melitool : ") + filename);
		this->LoadImage(filename); 
	}
	);

    ui.graphics_view_->setScene(&scene_);
}

Melitool::~Melitool()
{

}

void Melitool::LoadImage(const QString &filename) {
	cv_img_ = cv::imread(filename.toStdString());
	
	QImage image(cv_img_.data, cv_img_.cols, cv_img_.rows, cv_img_.step, QImage::Format_RGB888);

	img_ = image.rgbSwapped();

	QPixmap img_pixmap;
    assert(img_pixmap.convertFromImage(img_));
    QGraphicsPixmapItem *img_item = new QGraphicsPixmapItem(img_pixmap);

    scene_.clear();
    scene_.addItem(img_item);
}
