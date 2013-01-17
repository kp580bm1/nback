#pragma once
#include <QtGui/QMainWindow>
#include <QtCore/QTimer>
#include "sequence.h"
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow {
	Q_OBJECT
	Q_DISABLE_COPY(MainWindow)
public:
	MainWindow(QWidget * parent = 0);
	virtual ~MainWindow();
private slots:
	void prepare();
	void run();
	void stop();
	void mark();
	void next();
	void clearLetter();
private:
	Ui::MainWindow ui;
	Sequence sequence;
	QTimer timer;

	void singleShot(int ms, const char * slot);
};
