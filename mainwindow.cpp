#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->spinScale->setValue( this->ui->renderArea->listOfCurves->getScale() );
    this->ui->spinInterval->setValue( this->ui->renderArea->listOfCurves->getIntervalLength());
    this->ui->spinCount->setValue( this->ui->renderArea->listOfCurves->getStepCount() );

    // load the combo box with all possible curves
    this->ui->cboCurveSelect->addItems(this->ui->renderArea->listOfCurves->getCurveNames());
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Change the background color for the render Area
void MainWindow::on_btnAstroid_clicked()
{
    this->ui->renderArea->listOfCurves->setCurve(0);

    //use the ui object that belongs to the main window to access our render area
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->listOfCurves->setCurve(1);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnHuygens_clicked()
{
    this->ui->renderArea->listOfCurves->setCurve(2);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnHypo_clicked()
{
    this->ui->renderArea->listOfCurves->setCurve(3);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnFutureCurve_clicked()
{
    this->ui->renderArea->listOfCurves->setCurve(4);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnLine_clicked()
{
    this->ui->renderArea->listOfCurves->setCurve(5);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_spinScale_valueChanged(double scale)
{
    this->ui->renderArea->listOfCurves->setScale( scale );
    this->ui->renderArea->repaint();
}

void MainWindow::on_spinInterval_valueChanged(double interval)
{
    this->ui->renderArea->listOfCurves->setIntervalLength(interval);
    this->ui->renderArea->repaint();
}

void MainWindow::on_spinCount_valueChanged(int count)
{
    this->ui->renderArea->listOfCurves->setStepCount(count);
    this->ui->renderArea->repaint();
}

void MainWindow::update_ui()
{
    this->ui->spinScale->setValue( this->ui->renderArea->listOfCurves->getScale() );
    this->ui->spinInterval->setValue( this->ui->renderArea->listOfCurves->getIntervalLength());
    this->ui->spinCount->setValue( this->ui->renderArea->listOfCurves->getStepCount() );
}

void MainWindow::on_btnBackgroundColor_clicked()
{
    QColor color = QColorDialog::getColor(this->ui->renderArea->backgroundColor(), this, "Select Color", QColorDialog::DontUseNativeDialog);

    if( color.isValid() ){
        ui->renderArea->setBackgroundColor(color);
        ui->renderArea->repaint();
    }
}

void MainWindow::on_btnLineColor_clicked()
{
    QColor color = QColorDialog::getColor(this->ui->renderArea->shapeColor(), this, "Select Color");
    if( color.isValid() ){
        ui->renderArea->setShapeColor(color);
        ui->renderArea->repaint();
    }
}

void MainWindow::on_cboCurveSelect_currentIndexChanged(int index)
{
    this->ui->renderArea->listOfCurves->setCurve(index);
    this->ui->renderArea->repaint();
    update_ui();
}
