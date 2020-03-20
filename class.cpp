#include "class.h"

fenetre::fenetre(QWidget* widget){
    setWindowTitle("IHM");
    this->setMinimumSize(300,150);

    QVBoxLayout* layout = new QVBoxLayout();

    this->bar = new QProgressBar();
    this->slider =new QSlider(Qt::Horizontal);

    layout->addWidget(bar);
    layout->addWidget(slider);
    this->setLayout(layout);

    bar->setValue(0);
    slider->setMinimum(0);
    slider->setMaximum(100);

    connect(slider, SIGNAL(valueChanged(int)), bar, SLOT(setValue(int)));
}