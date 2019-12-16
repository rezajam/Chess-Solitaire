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
echo "Compiling C code in C8"
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

OBJECTS = big_file_C8_c.o 

OLDOBJECTS =  et1203.o et1203d.o et1201.o et1201d.o et1199.o et1199d.o et1197.o \
	et1197d.o et1195.o et1195d.o et1193.o et1193d.o et1191.o et1191d.o \
	et1202.o et1202d.o et1200.o et1200d.o et1198.o et1198d.o et1196.o \
	et1196d.o et1194.o et1194d.o et1192.o et1192d.o et1190.o et1190d.o \
	va1204.o va1204d.o va1205.o va1205d.o ki1219.o ki1219d.o kl1220.o \
	kl1220d.o ki1212.o ki1212d.o ki1217.o ki1217d.o ki1214.o ki1214d.o \
	ki1213.o ki1213d.o kl1206.o kl1206d.o ev1222.o ev1222d.o kl1211.o \
	kl1211d.o kl1210.o kl1210d.o kl1216.o kl1216d.o ki1218.o ki1218d.o \
	ev1221.o ev1221d.o uc1209.o uc1209d.o uc1208.o uc1208d.o uc1207.o \
	uc1207d.o kl1215.o kl1215d.o 

all: Cobj8.o

Cobj8.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj8.o $(OBJECTS)
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

