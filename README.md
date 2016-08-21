This contains some sample applications for bugs/problems or other cool stuff that I've done with wxWidgets.

|     Sample name    |               Report URL               |
|:------------------:|:--------------------------------------:|
| BindInheritanceBug | http://trac.wxwidgets.org/ticket/17623 |
|  SizingSetRectBug  | http://trac.wxwidgets.org/ticket/17635 |

Requirements:
* CMake 3.0+
* Prebuilt wxWidgets 3.0+ binaries in `3rdparty/wxWidgets`

Building:
* `cd build`
* `cmake .. -G "Visual Studio 14 2015 Win64"` (or generator of your choice)
* Build as appropriate for your selected generator