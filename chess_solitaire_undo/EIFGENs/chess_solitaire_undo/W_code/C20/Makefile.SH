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
echo "Compiling C code in C20"
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

OBJECTS = big_file_C20_c.o 

OLDOBJECTS =  ty1597.o ty1597d.o ty1599.o ty1599d.o he1613.o he1613d.o he1612.o \
	he1612d.o tr1616.o tr1616d.o bi1615.o bi1615d.o in1604.o in1604d.o \
	bi1611.o bi1611d.o pr1614.o pr1614d.o tr1617.o tr1617d.o ac1601.o \
	ac1601d.o ac1603.o ac1603d.o li1618.o li1618d.o kl1592.o kl1592d.o \
	in1596.o in1596d.o kl1593.o kl1593d.o kl1606.o kl1606d.o kl1609.o \
	kl1609d.o kl1594.o kl1594d.o kl1605.o kl1605d.o kl1608.o kl1608d.o \
	kl1595.o kl1595d.o kl1607.o kl1607d.o kl1610.o kl1610d.o ev1591.o \
	ev1591d.o ev1600.o ev1600d.o ev1602.o ev1602d.o ev1586.o ev1586d.o \
	ev1588.o ev1588d.o ev1589.o ev1589d.o ev1587.o ev1587d.o ev1590.o \
	ev1590d.o kl1598.o kl1598d.o 

all: Cobj20.o

Cobj20.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj20.o $(OBJECTS)
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

