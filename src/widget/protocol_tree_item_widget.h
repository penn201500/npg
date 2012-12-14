/*
 * protocol_tree_item.h
 *
 *  Created on: 2011-12-10
 *      Author: Young <public0821@gmail.com>
 */

#ifndef PROTOCOL_TREE_ITEM_H
#define PROTOCOL_TREE_ITEM_H

#include <QWidget>
#include "ui/ui_protocol_tree_item.h"
#include "protocol/field.h"
#include <QTreeWidgetItem>

class ProtocolTreeItemWidget : public QWidget
{
	Q_OBJECT

public:
	ProtocolTreeItemWidget(QTreeWidgetItem *item, const Field& field, QWidget *parent = 0);
	~ProtocolTreeItemWidget();
public:
	void setText(const QString& value);
	QString value();
	QString text();
private:
	QWidget* getFieldWidget(const Field& field);
public:
signals:
	void textChange(QTreeWidgetItem *, int);
protected slots:
	void onTextChange();
	void onCheckBoxStateChange(int state);
private:
	Ui::ProtocolTreeItem ui;
	Field m_field;
	QWidget* m_child;
	QTreeWidgetItem * m_item;
};

#endif // PROTOCOL_TREE_ITEM_H
