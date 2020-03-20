#ifndef TP3_CLASS_H
#define TP3_CLASS_H

#include <QObject>
#include <QtWidgets/QWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

class fenetre: public QWidget {
Q_OBJECT
private:
    QProgressBar* bar;
    QSlider* slider;
public:
    fenetre(QWidget* widget = nullptr);
};

#endif //TP3_CLASS_H
