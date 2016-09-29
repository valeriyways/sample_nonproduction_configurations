1. Install Notepad++ from https://notepad-plus-plus.org/download/v6.9.2.html
2. Launch it
  * open in menu: Plugins->Plugin Manager->Show Plugin Manager
  * Install NppExec or download it from https://sourceforge.net/projects/npp-plugins/files/NppExec/NppExec%20Plugin%20v0.5.3/NppExec_053_dll_Unicode.zip/download and unpack NppExec.dll to %NOTEPAD++_HOME%\plugins directory
3. Put plugins\Config\npes_saved.txt in %NOTEPAD++_HOME%\plugins\Config directory and restart notepad++.
4. Put "r@.cpp.txt" and run.gdb to the root of your c++ project (use new folder with main.cpp from current repository for example)
5. Download c++ compiler from http://tdm-gcc.tdragon.net/download, unpack it and add "bin" subfolder of it to %PATH% system environment variable
Check that it is added by opening terminal and running:
echo %PATH%
6. compile simple hello world and make sure its running before trying to use notepad++ as IDE
7. correct files you downloaded from this repository as you please.
8. Open main source file in notepad++, compile and run it by opening it in menu Plugins->NppExec->Execute..., target: compile_and_run or RunCPP(if you prefer to use notepad++ console for debugging)
9. Modify r@.cpp.txt stands for .cpp, you could add r@.java.txt or r@.anyknownprogramminglanguageextension.txt and customize compilation and run process in it.
10. Modify run.gdb (its just first commands as input to gdb) you could add logging for example.

9od bless your searching in google if something goes not as expected.

![Start command line](/windows/notepad++_ide_min/images/cmd.JPG "Start command line")
![Add c++ %compiler_home%/bin to %PATH%](/windows/notepad++_ide_min/images/gcc.JPG "Add c++ %compiler_home%/bin to %PATH%")
![Correct compiler and debugger executables](/windows/notepad++_ide_min/images/config_correction.JPG "Correct compiler and debugger executables")
![Run NppExec script (1)](/windows/notepad++_ide_min/images/npp_execute.JPG "Run NppExec script (1)")
![Run NppExec script (2)](/windows/notepad++_ide_min/images/npp_execute2.JPG "Run NppExec script (2)")
![See in console warning that build(for storing compiled objects) is not found. Run several commands in gdb debugger](/windows/notepad++_ide_min/images/npp_execute3.JPG "See in console warning that build(for storing compiled objects) is not found. Run several commands in gdb debugger")
![Open (Ctrl+~) notepad++ console and type help or help npp_exec for additional info](/windows/notepad++_ide_min/images/npp_execute4.JPG "Open (Ctrl+~) notepad++ console and type help or help npp_exec for additional info")
