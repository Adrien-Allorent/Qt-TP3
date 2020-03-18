#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "class.h"

void Exo1(){
    fenetre widget;
    widget.show();
}

int main(int argc, char **argv){
    QApplication app (argc, argv);

    Exo1();

    return app.exec();
}
