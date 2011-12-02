#ifndef __PROTOCOL_H__
#define __PROTOCOL_H__
#include "category.h"
class Protocol
{
public:
	Protocol(void);
	~Protocol(void);
public:
	void addCategory(const Category& category);
	std::vector<Category>& Categorys();
public:
	sstring name() const;
	sstring dependence() const;
	sstring icon() const;

	void setName(const sstring& name);
	void setDependence(const sstring& dependence);
	void setIcon(const sstring& icon);

private:
	std::vector<Category> m_categorys;
private:
	sstring m_name;
	sstring m_dependence;
	sstring m_icon;
};
#endif