
#include <iostream>
#include <QKeyEvent>
#include "start.h"
#include "ui_start.h"
#include <QVBoxLayout>
#include <QWidget>
#include "chooselevel.h"
#include "caveview.h"
#include <QMainWindow>


Start::Start(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
    setBackground("../sprite/background.png");
}

Start::~Start()
{

    delete ui;
}


void Start::setBackground(const QString& imagePath)
{
    QPixmap bkgnd(imagePath);
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    setPalette(palette);
}


void Start::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    setBackground("../sprite/background.png");

}

void Start::keyPressEvent(QKeyEvent *event)
{
    setFocusPolicy(Qt::StrongFocus);
    if ( event->key() == Qt::Key_Space) {
        close();
        ChooseLevel *chooseLevel = new ChooseLevel();

        chooseLevel->show();
    }
}




