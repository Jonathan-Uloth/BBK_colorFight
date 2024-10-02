#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <QObject>


// Farbenkonfiguration
const int COLORCOUNT = 6; // Anzahl Farben
enum Colors { RED, BLUE, GREEN, YELLOW, MAGENTA, ORANGE };


class GameEngine : public QObject
{
    Q_OBJECT
public:
    explicit GameEngine(QObject *parent = nullptr);

private:
    QList< QList<Colors> > cells;

signals:
};

#endif // GAMEENGINE_H
