#ifndef WINDOW_MAIN
#define WINDOW_MAIN

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QLayout>


class Window_Main : public QWidget
{
private :

    QVBoxLayout *layoutV_main;
    QGridLayout *layoutG_zonesaisie;
    QPushButton *bouton_ok_window_main;
    QLineEdit *lineedit_n1;
    QLabel *label_n1;

public :

    Window_Main();
    Window_Main(int largeur, int longueur);


};

#endif // WINDOW_MAIN

