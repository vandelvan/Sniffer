#ifndef LISTSNIFF_H
#define LISTSNIFF_H

#include <QDialog>

namespace Ui {
class listSniff;
}

class listSniff : public QDialog
{
    Q_OBJECT

public:
    explicit listSniff(QWidget *parent = nullptr);
    ~listSniff();

private:
    Ui::listSniff *ui;
};

#endif // LISTSNIFF_H
