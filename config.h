#ifndef CONFIG_H
#define CONFIG_H
#include <QColor>

const int CELLCOUNT_H = 13;
const int CELLCOUNT_V = 17;

const int COLORCOUNT = 6;
enum Colors { RED, BLUE, GREEN, YELLOW, MAGENTA, ORANGE };

QColor turnNumberInColor(Colors color);

#endif // CONFIG_H
