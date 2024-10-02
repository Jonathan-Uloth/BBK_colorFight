#include "gameengine.h"
#include <QRandomGenerator>

GameEngine::GameEngine(QObject *parent)
    : QObject{parent}
{
    // Dimensionieren verschachtelte Liste auf 13x17
    cells = QList<QList<Colors>>(13, QList<Colors>(17));

    // Randomly fill each cell with a random color
    for (int row = 0; row < cells.size(); ++row) {
        for (int col = 0; col < cells[row].size(); ++col) {
            cells[row][col] = static_cast<Colors>(QRandomGenerator::global()->bounded(0,COLORCOUNT));
        }
    }
}

