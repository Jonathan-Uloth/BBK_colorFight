#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <QObject>
#include <QDebug>

// Farbenkonfiguration
const int COLORCOUNT = 6;
enum Colors { RED, BLUE, GREEN, YELLOW, MAGENTA, ORANGE };


class GameEngine : public QObject
{
    Q_OBJECT
public:
    explicit GameEngine(QObject *parent = nullptr);

    void printCells();

    void generateCells();

    void generateCells();

private:
    QList< QList<Colors> > cells;

signals:
};

#endif // GAMEENGINE_H
