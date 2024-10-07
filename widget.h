#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "gameengine.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    GameEngine gameengine;
};
#endif // WIDGET_H
