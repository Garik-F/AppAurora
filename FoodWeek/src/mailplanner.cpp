#include "mailplanner.h"

MealPlanner::MealPlanner(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    QStringList meals = { "Овсянка", "Паста", "Салат", "Курица", "Рыба", "Овощи", "Фрукты" };

    comboBoxes.resize(7); // 7 дней в неделе
    for (int i = 0; i < 7; ++i) {
        comboBoxes[i] = new QComboBox(this);
        comboBoxes[i]->addItems(meals);
        layout->addWidget(new QLabel("Выберите еду на день " + QString::number(i + 1) + ":"));
        layout->addWidget(comboBoxes[i]);
    }

    QPushButton *saveButton = new QPushButton("Сохранить выбор", this);
    connect(saveButton, &QPushButton::clicked, this, &MealPlanner::saveSelection);
    layout->addWidget(saveButton);

    setLayout(layout);
    setWindowTitle("Выбор питания на неделю");
}

void MealPlanner::saveSelection() {
    QStringList selectedMeals;
    for (int i = 0; i < 7; ++i) {
        selectedMeals << comboBoxes[i]->currentText();
    }

    QString message = "Ваш выбор на неделю:\n";
    for (int i = 0; i < 7; ++i) {
        message += "День " + QString::number(i + 1) + ": " + selectedMeals[i] + "\n";
    }

    QMessageBox::information(this, "Выбор питания", message);
}
