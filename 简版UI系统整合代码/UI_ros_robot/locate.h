#ifndef LOCATE_H
#define LOCATE_H

#include <QDialog>

namespace Ui {
class locate;
}

class locate : public QDialog
{
    Q_OBJECT

public:
    explicit locate(QWidget *parent = nullptr);
    ~locate();

private slots:

    void on_locate_2_clicked();

private:
    Ui::locate *ui;

signals:
    void emitsignal_usr();
    void emitsignal_admin();
};

#endif // LOCATE_H
