// mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QMessageBox>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDialog>
#include <QLabel>
#include <QStack>
#include <QVector>
#include <QMap>

namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT



public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void TimVaXuatChuTrinhHoacDuongDiEuler();
    void euler(int x, bool isCycle);
    bool isConnected();
    bool KiemTraChuTrinhEuler();
    void dijkstra(int startVertex);
    void on_dijkstraButton_clicked();


private slots:
    void drawGraph();
    void runGraphAlgorithm();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QMap<int, QSet<int>> a; // Change QSet<int> a[10001] to QMap<int, QSet<int>> a
    int n; // Number of vertices
    int m; // Number of edges
    int bac[10001] = {0}; // Bậc của các đỉnh

};



#endif // MAINWINDOW_H
