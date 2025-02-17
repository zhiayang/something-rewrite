SET CXX=g++
SET PKGS=sdl2 glew --static
SET CXXFLAGS=-Wall -Wextra -std=c++17 -pedantic -fno-exceptions -D_GNU_SOURCE
rem inspired  https://stackoverflow.com/questions/2323292/assign-output-of-a-program-to-a-variable-using-a-ms-batch-file
pkg-config --cflags %PKGS% >temp.txt
set /p PKGSCFLAGS=<temp.txt
pkg-config --libs %PKGS% >temp.txt
set /p PKGLIBS=<temp.txt
del temp.txt
%CXX% %CXXFLAGS% %PKGSCFLAGS% -o something.debug.exe src/something.cpp %PKGLIBS% -lopengl32 -static
dir *.exe

