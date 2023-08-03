#include "ncbind/ncbind.hpp"

struct System
{
	static void setCurrentDirectory(ttstr path)
	{
		TVPSetCurrentDirectory(path.c_str());
	}
};

NCB_ATTACH_FUNCTION(setCurrentDirectory, System, System::setCurrentDirectory);
