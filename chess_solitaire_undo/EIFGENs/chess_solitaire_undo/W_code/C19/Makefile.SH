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
echo "Compiling C code in C19"
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

OBJECTS = big_file_C19_c.o 

OLDOBJECTS =  ti1568.o ti1568d.o da1566.o da1566d.o et1582.o et1582d.o et1577.o \
	et1577d.o ti1567.o ti1567d.o da1571.o da1571d.o da1565.o da1565d.o \
	kl1555.o kl1555d.o yy1576.o yy1576d.o et1575.o et1575d.o da1570.o \
	da1570d.o da1569.o da1569d.o kl1554.o kl1554d.o yy1573.o yy1573d.o \
	et1574.o et1574d.o ev1583.o ev1583d.o kl1556.o kl1556d.o ev1585.o \
	ev1585d.o ev1559.o ev1559d.o kl1564.o kl1564d.o kl1562.o kl1562d.o \
	kl1563.o kl1563d.o kl1561.o kl1561d.o uc1580.o uc1580d.o ev1584.o \
	ev1584d.o ki1578.o ki1578d.o kl1579.o kl1579d.o kl1558.o kl1558d.o \
	kl1553.o kl1553d.o kl1557.o kl1557d.o ki1560.o ki1560d.o uc1581.o \
	uc1581d.o uc1572.o uc1572d.o 

all: Cobj19.o

Cobj19.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj19.o $(OBJECTS)
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

