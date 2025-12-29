#pragma once
#include <QWidget>
#include <QPushButton>
#include <QVector>
#include <QChar>

class GameWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GameWidget(int size = 4, QWidget *parent = nullptr);

private slots:
    void handleButton();
    void showRules(); // slot pour afficher les règles

private:
    int SIZE;
    QVector<QVector<QPushButton*>> buttons;
    bool crossTurn;

    void setupUi();
    void resetGame();
    bool boardFull() const;
    bool hasThreeInARow(QChar symbol) const;
};
