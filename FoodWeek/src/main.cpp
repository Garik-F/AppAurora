#include <QApplication>
#include "mailplanner.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MealPlanner planner;
    planner.resize(300, 400);
    planner.show();

    return app.exec();
}
