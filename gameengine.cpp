#include "gameengine.h"
#include <QTime>
#include <QRandomGenerator64>

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

    // Dimensionieren der verschachtelten Listen auf 13 x 17
    cells = QList< QList< Colors > > (13,QList<Colors>(17));

    // Für jede Zelle wir eine zufällige Zahl (Farbe) ausgewählt
    for (int row=0; row<cells.size(); row++)
        for (int col=0; col<cells[row].size(); col++)
            cells[row][col] = static_cast<Colors>(QRandomGenerator64::global()->bounded(0, COLORCOUNT));
}

GameEngine::GameEngine(QObject *parent)
    : QObject{parent}
{
    generateCells();
}
