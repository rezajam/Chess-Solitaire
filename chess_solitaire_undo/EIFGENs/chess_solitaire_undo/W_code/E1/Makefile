INCLUDE_PATH =  -I"$(ISE_LIBRARY)/library/encoding/implementation/include" -I"$(ISE_LIBRARY)/library/time/spec/include" -I"$(ISE_LIBRARY)/library/vision2/spec/include" -I"$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib"  -D_REENTRANT -I/opt/local/include/gtk-2.0 -I/opt/local/lib/gtk-2.0/include -I/opt/local/include/pango-1.0 -I/opt/local/include/gio-unix-2.0/ -I/opt/local/include -I/opt/local/include/cairo -I/opt/local/include/atk-1.0 -I/opt/local/include/cairo -I/opt/local/include/pixman-1 -I/opt/local/include -I/opt/local/include/gdk-pixbuf-2.0 -I/opt/local/include/libpng16 -I/opt/local/include/pango-1.0 -I/opt/local/include/harfbuzz -I/opt/local/include -I/opt/local/include/pango-1.0 -I/opt/local/include/fribidi -I/opt/local/include -I/opt/local/include/ossp -I/opt/local/include/freetype2 -I/opt/local/include/libpng16 -I/opt/local/include -I/opt/local/include/glib-2.0 -I/opt/local/lib/glib-2.0/include -I/opt/local/include
SHELL = /bin/sh
CC = cc
CPP = c++
CFLAGS = -O0 -pipe -fno-common -fPIC -DEIF_THREADS -DEIF_POSIX_THREADS  -DWORKBENCH -I"/usr/local/Eiffel_19.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fno-common -fPIC -DEIF_THREADS -DEIF_POSIX_THREADS  -DWORKBENCH -I"/usr/local/Eiffel_19.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -dynamiclib -flat_namespace -undefined suppress -o
EIFLIB = "/usr/local/Eiffel_19.05/studio/spec/macosx-x86-64/lib/libmtwkbench.a"
EIFTEMPLATES = /usr/local/Eiffel_19.05/studio/config/macosx-x86-64/templates
LIBS = -lm -lpthread
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/usr/local/Eiffel_19.05/studio/spec/macosx-x86-64/bin/x2c"
SHAREDLINK = cc
SHAREDLIBS = -lm
SHARED_SUFFIX = .dylib
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = chess_solitaire_undo.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = eoption.o epattern.o efrozen.o ecall.o eplug.o eskelet.o enames.o \
	evisib.o ececil.o einit.o eparents.o 

all: $(OBJECTS)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

