#ifndef UI_ROS_H
#define UI_ROS_H

#include <QDialog>

namespace Ui {
class UI_ros;
}

class UI_ros : public QDialog
{
    Q_OBJECT

public:
    explicit UI_ros(QWidget *parent = nullptr);
    ~UI_ros();

private slots:
    void acceptedmain_admin();

    void on_beginmap_clicked();

    void on_save_map_clicked();

    void on_adpoint_button_clicked();

    void on_change_name_button_clicked();

    void on_point_before_change_activated(int index);

    void on_point_after_change_activated(int index);

    void on_save_waypoints_clicked();

private:
    Ui::UI_ros *ui;
};

#endif // UI_ROS_H
