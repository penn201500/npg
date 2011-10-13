/*
 * npg.h
 *
 *  Created on: 2011-8-19
 *      Author: Young <public0821@gmail.com>
 */
#ifndef NPG_H
#define NPG_H

#include <QtGui/QMainWindow>
#include "ui_npg.h"
#include <QSplitter>
#include "main_list_widget.h"
#include "main_tab_widget.h"

class npg: public QMainWindow
{
Q_OBJECT

public:
	npg(QWidget *parent = 0);
	~npg();
private slots:
	void itemDoubleClicked(QListWidgetItem * item);
	void onClose();
private:
	void saveSettings();
	void restoreSettings();
private:
	Ui::npgClass ui;
	MainListWidget* m_type_list;
	MainTabWidget* m_tab_widget;
	QSplitter* m_main_splitter;
//	QStringList m_data_types;
};

#endif // NPG_H