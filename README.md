# wxWidgetsStuff

This contains some sample applications for bugs/problems and other cool stuff that I've done with wxWidgets.

|     Sample name    |               Report URL               |
|:------------------:|:--------------------------------------:|
| BindInheritanceBug | http://trac.wxwidgets.org/ticket/17623 |
|  SizingSetRectBug  | http://trac.wxwidgets.org/ticket/17635 |

## Building
### Requirements
* CMake 3.0+
* Prebuilt wxWidgets 3.0+ binaries in `3rdparty/wxWidgets`

### Compiling
* `cd build`
* `cmake .. -G "Visual Studio 14 2015 Win64"` (or use a generator of your choice)
* Build as appropriate for your selected generator