#include "startform.h"
#include "ui_startform.h"
#include <QFile>
#include <QFileDialog>
#include "fileparser.h"

startForm::startForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::startForm)
{
    ui->setupUi(this);
}

startForm::~startForm()
{
    delete ui;
}

void startForm::on_btnLoad_clicked()
{
    QFileDialog fileDiag;
    QString newUrl =fileDiag.getOpenFileName();

//    QFile file(newUrl);

    FileParser parse;
    parse.parseToJson(newUrl);


}
