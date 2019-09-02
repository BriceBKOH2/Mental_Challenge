#include <window_main.h>

#include <QWidget>

Window_Main::Window_Main() : QWidget()
{
    setFixedSize(500,400);

    /* Initialisation */
    bouton_ok_window_main = new QPushButton("OK", this);
    lineedit_n1 = new QLineEdit(this);
    label_n1 = new QLabel("Reponse",this);
    layoutV_main = new QVBoxLayout;
    layoutG_zonesaisie = new QGridLayout;


    /* Layout Position */
    this->setLayout(layoutV_main);

    layoutV_main->addLayout(layoutG_zonesaisie);

    layoutG_zonesaisie->addWidget(label_n1, 0, 0);
    layoutG_zonesaisie->addWidget(lineedit_n1, 0, 1);
    layoutG_zonesaisie->addWidget(bouton_ok_window_main, 1, 0);
}

Window_Main::Window_Main(int largeur,int longueur) : QWidget()
{
    /* Change Window size */
    this->setFixedSize(largeur,longueur);

    /* Initialisation */
    bouton_ok_window_main = new QPushButton("OK", this);
    lineedit_n1 = new QLineEdit(this);
    label_n1 = new QLabel("Reponse",this);
    layoutV_main = new QVBoxLayout;
    layoutG_zonesaisie = new QGridLayout;

    /* Layout Position */
    this->setLayout(layoutV_main);

    layoutV_main->addLayout(layoutG_zonesaisie);
    layoutV_main->addWidget(bouton_ok_window_main);

    layoutG_zonesaisie->addWidget(label_n1, 0, 0);
    layoutG_zonesaisie->addWidget(lineedit_n1, 0, 1);
}
