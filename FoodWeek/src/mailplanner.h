#ifndef MEALPLANNER_H
#define MEALPLANNER_H

#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QMessageBox>

class MealPlanner : public QWidget {
    Q_OBJECT

public:
    explicit MealPlanner(QWidget *parent = nullptr);

private slots:
    void saveSelection();

private:
    QVector<QComboBox*> comboBoxes; // Контейнер для ComboBox
};

#endif // MEALPLANNER_H
