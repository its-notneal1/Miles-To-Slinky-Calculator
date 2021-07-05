#ifndef SLINKYCALCULATOR_H
#define SLINKYCALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SlinkyCalculator; }
QT_END_NAMESPACE

class SlinkyCalculator : public QMainWindow
{
    Q_OBJECT

public:
    SlinkyCalculator(QWidget *parent = nullptr);
    ~SlinkyCalculator();

private:
    Ui::SlinkyCalculator *ui;
private slots:
        void Calculate();
};
#endif // SLINKYCALCULATOR_H
