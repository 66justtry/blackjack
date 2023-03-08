#include "mainwindow.h"
#include "player.h"
#include "dealer.h"

#include <QApplication>
#include <time.h>

Player* Player::instancePtr = nullptr;
Dealer* Dealer::instancePtr = nullptr;

int main(int argc, char *argv[])
{
    srand(time(NULL));
    QApplication a(argc, argv);
    Player* player = Player::GetInstance();
    player->SetBalance();
    Dealer* dealer = Dealer::GetInstance();
    MainWindow w;
    w.show();
    w.SetSpinBox(player->GetBalance());
    delete player;
    delete dealer;
    return a.exec();
}
