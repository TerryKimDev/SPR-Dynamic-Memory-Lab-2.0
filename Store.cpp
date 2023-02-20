#include "Store.h"

Store::Store()
{
	Item* helperItem = new Item("DEFAULT", 10);
	delete helperItem;
	m_Inventories = new Inventory[m_NumInventories];
}
Store::~Store()
{
	delete[] m_Inventories;
}

void Store::Print() const
{
	for (unsigned int i = 0; i < m_NumInventories; ++i)
	{
		m_Inventories[i].Print();
	}
}