#ifndef STARTFORM_H
#define STARTFORM_H

#include <QWidget>

namespace Ui {
class startForm;
}

class startForm : public QWidget
{
    Q_OBJECT

public:
    explicit startForm(QWidget *parent = nullptr);
    ~startForm();

private slots:
    void on_btnLoad_clicked();

private:
    Ui::startForm *ui;
};

#endif // STARTFORM_H
