#include "widget.h"
#include <QPainter>
#include "config.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{}

Widget::~Widget() {}

void Widget::paintEvent(QPaintEvent *){// *event){
    QPainter painter(this);                 // Zeichenstift
    QList<QList<Colors>> gameCells = gameengine.getCells();

    for (int row=0; row<gameCells.size(); row++)
        for (int col=0; col<gameCells[row].size(); col++)
            painter.fillRect(row*22, col*22, 20, 20, turnNumberInColor(gameCells[row][col]));
}
//Ein Cooler Kommentar für GIT
