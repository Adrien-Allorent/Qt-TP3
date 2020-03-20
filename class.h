#ifndef TP3_CLASS_H
#define TP3_CLASS_H

#include <QObject>
#include <QtWidgets/QWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

class fenetre1: public QWidget {
Q_OBJECT
private:
    QProgressBar* bar;
    QSlider* slider;
public:
    fenetre1(QWidget* parent = nullptr);
};

class fenetre2: public QWidget {
Q_OBJECT
private:
    QPushButton* button;
    QTextEdit * text;
    int value = 0;
public:
    fenetre2(QWidget* parent = nullptr);
signals:
    void clicked();
public slots:
    void changeButton();
    void changeIHM();
};

#endif //TP3_CLASS_H
