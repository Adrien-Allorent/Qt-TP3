#include <QtWidgets/QtWidgets>
#include "class.h"

fenetre1::fenetre1(QWidget* parent){
    setWindowTitle("IHM");
    this->setMinimumSize(300,150);

    QVBoxLayout* layout = new QVBoxLayout();

    bar = new QProgressBar();
    slider =new QSlider(Qt::Horizontal);

    layout->addWidget(bar);
    layout->addWidget(slider);
    this->setLayout(layout);

    bar->setValue(0);
    slider->setMinimum(0);
    slider->setMaximum(100);

    connect(slider, SIGNAL(valueChanged(int)), bar, SLOT(setValue(int)));
}

fenetre2::fenetre2(QWidget* parent){
    setWindowTitle("IHM");

    QVBoxLayout* layout = new QVBoxLayout();

    button = new QPushButton("fils");
    text = new QTextEdit("Texte initial");

    layout->addWidget(button);
    layout->addWidget(text);
    this->setLayout(layout);

    //connect(button, SIGNAL(clicked()), qApp, SLOT(quit())); Ferme la fenêtre
    //connect(button, SIGNAL(clicked()), this, SLOT(changeButton()));
    connect(button, SIGNAL(clicked()), this, SLOT(changeIHM()));
}

void fenetre2::changeButton() {
    button->setText("Example");
    value ++;
    QString addedText = "";
    for(int i = 1; i <= value; i++){
        addedText += "Example"+QString::number(i)+"\n";
    }
    addedText += "Texte initial";
    text->clear();
    text->append(addedText);
}

void fenetre2::changeIHM(){
    fenetre1* newIHM = new fenetre1();
    newIHM->show();
}