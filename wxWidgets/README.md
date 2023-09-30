The Library is too big for it to be hosted on github so the wxWidgets files sizes are left out and will just put the code for each runtime in the github repo.

-the gitinore witll make sure the wxWidgets Library stays out

#Windows
The Setup for the Build for Visual Studio 2022

this all done after you make a edit to Environment Variables in windows system and point it the folder of the library
and name it WXWIN

All Platforms:
Create a C++ file
Go to C++ Directories and Include : $(WXWIN)\include; $(WXWIN)\include\msvc
Then switch (Linker, System) change console ouput to windows output

win32 Platform:
Go to (Linker, General) Addtional Library Directories : $(WXWIN)\lib\vc_lib

x64 Platform:
the same spot you changed the win32 it will be empty under the x64 all you have to do 
is add this : $(WXWIN)\lib\vc_x64_lib


Bookmark: https://youtu.be/MRTrN0THsaA?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G&t=53

Book for xwWidgets: https://www.wxwidgets.org/docs/book/Cross-Platform%20GUI%20Programming%20with%20wxWidgets.pdf