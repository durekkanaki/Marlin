#include "ScreenList.h"

namespace screen
{
	ScreenList::ScreenList(const char * label)
		: Screen(label, LIST)
	{
	}

	ScreenList::~ScreenList()
	{
	}

	void ScreenList::left()
	{
	}

	void ScreenList::right()
	{
	}

	void ScreenList::draw()
	{
	}

	Screen & ScreenList::press()
	{
		return * m_next_screen;
	}

   void ScreenList::add(Screen & component)
   {
      m_next_screen = &component;
   }
}