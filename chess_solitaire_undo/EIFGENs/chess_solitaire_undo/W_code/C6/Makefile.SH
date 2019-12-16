case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C6"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)/library/encoding/implementation/include" -I"\$(ISE_LIBRARY)/library/time/spec/include" -I"\$(ISE_LIBRARY)/library/vision2/spec/include" -I"\$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib" `$ISE_LIBRARY/library/encoding/implementation/unix/Clib/iconv-config --include_path` `$ISE_LIBRARY/library/vision2/implementation/gtk/Clib/vision2-gtk-config --include_path`
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = chess_solitaire_undo$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C6_c.o 

OLDOBJECTS =  ro1140.o ro1140d.o et1139.o et1139d.o et1138.o et1138d.o co1126.o \
	co1126d.o ob1131.o ob1131d.o ob1130.o ob1130d.o pl1150.o pl1150d.o \
	ob1129.o ob1129d.o do1149.o do1149d.o ob1128.o ob1128d.o ob1127.o \
	ob1127d.o ch1142.o ch1142d.o ab1124.o ab1124d.o da1151.o da1151d.o \
	n_1148.o n_1148d.o r_1147.o r_1147d.o b_1146.o b_1146d.o p_1145.o \
	p_1145d.o k_1144.o k_1144d.o q_1143.o q_1143d.o ev1134.o ev1134d.o \
	kl1135.o kl1135d.o ev1152.o ev1152d.o ev1132.o ev1132d.o ev1153.o \
	ev1153d.o ev1133.o ev1133d.o kl1137.o kl1137d.o ev1141.o ev1141d.o \
	uc1125.o uc1125d.o ki1136.o ki1136d.o ev1156.o ev1156d.o ev1155.o \
	ev1155d.o ev1154.o ev1154d.o 

all: Cobj6.o

Cobj6.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj6.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

