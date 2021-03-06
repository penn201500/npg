/*
 * base_protocol_widget.h
 *
 *  Created on: 2011-12-10
 *      Author: Young <public0821@gmail.com>
 */
#ifndef BASE_PROTOCOL_WIDGET_H
#define BASE_PROTOCOL_WIDGET_H

#include <QWidget>
#include "lib/types.h"
#include <QPushButton>
#include <QHBoxLayout>

class BaseProtocolWidget : public QWidget
{
	Q_OBJECT

public:
	BaseProtocolWidget(const QString& full_protocol_name,QWidget *parent);
	virtual ~BaseProtocolWidget();
public:
	virtual bool preSendData() = 0;
	virtual bool sendData(const char* data, uint16_t length) = 0;
	virtual bool postSendData() = 0;
	virtual void saveSettings() = 0;
	virtual void restoreSettings() = 0;
protected:
	QString fullProtocolName()const{return m_full_protocol_name;};
	//void setupUi(QHBoxLayout* layout, QWidget* show_widget);
//protected slots:
//	void onShowButton();
private:
	QString m_full_protocol_name;
	QPushButton* m_show_button;
	QWidget* m_show_widget;
	bool m_show;
};

#endif // BASE_PROTOCOL_WIDGET_H
