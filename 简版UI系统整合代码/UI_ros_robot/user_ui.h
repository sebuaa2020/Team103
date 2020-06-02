#ifndef USER_UI_H
#define USER_UI_H

#include <QDialog>

namespace Ui {
class User_ui;
}

class User_ui : public QDialog
{
    Q_OBJECT

public:
    explicit User_ui(QWidget *parent = nullptr);
    ~User_ui();

private slots:
    void acceptedmain_usr();
    void on_to_aimed_point_clicked();

    void on_init_nav_clicked();

    void on_command_do_clicked();

    void on_news_weather_clicked();

    void on_voice_input_clicked();

    void on_grab_button_clicked();

private:
    Ui::User_ui *ui;
};

#endif // USER_UI_H
