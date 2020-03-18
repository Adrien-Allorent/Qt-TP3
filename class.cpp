#include <QtWidgets/QVBoxLayout>
#include "class.h"

fenetre::fenetre(QWidget* widget) {
    setWindowTitle("IHM");
    this->setMinimumSize(200,200);
    QVBoxLayout* layout = new QVBoxLayout();
    bar = new QProgressBar();
    slider =new QSlider(Qt::Horizontal);
    layout->addWidget(bar);
    layout->addWidget(slider);
    this->setLayout(layout);

}
