#include "slinkycalculator.h"
#include "ui_slinkycalculator.h"

#include <string>



SlinkyCalculator::SlinkyCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SlinkyCalculator) {
    ui->setupUi(this);
    connect(ui->Button_convert, SIGNAL(pressed()), this, SLOT(Calculate()));
}

void SlinkyCalculator::Calculate() {
    QString input = ui->LineEdit_input->text();
    if(input.length() == 0 || input == "") {
        input = 0;
    }
    std::string temp = input.toStdString();
    for(std::string::size_type i = 0; i < temp.length(); i++) {
        if(temp[i] == '.') break; // break the decimal
        if(!isdigit(temp[i])) {
            ui->Label_result->setText("Invalid Input");
            return;
        }
    }
    int input_int = input.toInt();
    int result;
    QString result_qstr = input;
    if (ui->RadioBtn_miles->isChecked()) {
       result = (input_int * 5280) / 67;
       result_qstr += " miles";
    } else if (ui->RadioBtn_km->isCheckable()) {
        result = (input_int * 1000) / 20;
        result_qstr += " kilometers";
    } else {
        ui->Label_result->setText("Select a unit first");
        return;
    }

    ui->Label_result->setText(result_qstr + " is " + QString::number(result) + " slinkies");
}

SlinkyCalculator::~SlinkyCalculator() {
    delete ui;
}


