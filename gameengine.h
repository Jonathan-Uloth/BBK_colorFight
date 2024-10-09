#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <QObject>
#include <QDebug>
#include "config.h"

class GameEngine : public QObject
{
    Q_OBJECT
public:
    explicit GameEngine(QObject *parent = nullptr);

    void printCells();
    void generateCells();

    QList< QList< Colors > > cells;

    QList< QList< Colors > > getCells() const;
    void setCells(const QList< QList< Colors > > &newCells);

private:

signals:
};

#endif // GAMEENGINE_H
