#ifndef TP3_CLASS_H
#define TP3_CLASS_H

#include <QObject>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>

class fenetre: public QWidget {
    Q_OBJECT
private:
    QProgressBar* bar;
    QSlider* slider;

public:
    fenetre(QWidget* widget = nullptr);
};

#endif //TP3_CLASS_H
