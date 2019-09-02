#include <QApplication>

#include <window_main.h>


int main (int argc, char *argv[])
{
    QApplication programme_mental_challenge(argc, argv);

    Window_Main main_window;

    main_window.show();

    return programme_mental_challenge.exec();
}
