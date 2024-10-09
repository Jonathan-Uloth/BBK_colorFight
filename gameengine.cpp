#include "gameengine.h"
#include <QTime>
#include <QRandomGenerator64>
#include <QColor>

void GameEngine::printCells()
{
    QString line;
    for (const auto& row : cells) {
        for (const auto& color : row) {
            // Hier könntest du eine Funktion zur Ausgabe der Farben verwenden
            line.append( QString::number(color) );
        }
        qDebug() << line;
        line.clear();
    }
}

void GameEngine::generateCells()
{
    QRandomGenerator64::global()->bounded(0, 5);

    // Dimensionieren der verschachtelten Listen auf 13x17 // (CELLCOUNT_H x CELLCOUNT_V)
    cells = QList< QList< Colors > > (CELLCOUNT_V,QList<Colors>(CELLCOUNT_H));

    // Für jede Zelle wir eine zufällige Zahl (Farbe) ausgewählt
    for (int row=0; row<cells.size(); row++)
        for (int col=0; col<cells[row].size(); col++)
            cells[row][col] = static_cast<Colors>(QRandomGenerator64::global()->bounded(0, COLORCOUNT));

    this->setCells(cells);
}

QList< QList< Colors > > GameEngine::getCells() const{
    return cells;
}

void GameEngine::setCells(const QList< QList< Colors > > &newCells){
    cells = newCells;
}

GameEngine::GameEngine(QObject *parent)
    : QObject{parent}
{
    generateCells();
}
