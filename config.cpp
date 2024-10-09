#include "config.h"

QColor turnNumberInColor(Colors color){
    switch(color){
    case RED:
        return Qt::red;
    case BLUE:
        return Qt::blue;
    case GREEN:
        return Qt::green;
    case YELLOW:
        return Qt::yellow;
    case MAGENTA:
        return Qt::magenta;
    case ORANGE:
        return QColor(200,100,0);
    }
}
