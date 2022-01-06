#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTimer>

namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow
{
 Q_OBJECT

public:
 explicit MainWindow(QWidget *parent = 0);
 ~MainWindow();

private slots:
 void chronometre();
 void on_pb_Quitter_clicked();
 void on_pb_Raz_clicked();
 void on_pb_demarer_clicked();
 void on_pb_Arreter_clicked();

private:
 Ui::MainWindow *ui;
 int valeur;
 QTimer *monTimer;
};

#endif // MAINWINDOW_H
