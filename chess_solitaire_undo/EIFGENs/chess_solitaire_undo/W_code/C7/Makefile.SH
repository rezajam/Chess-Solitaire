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
echo "Compiling C code in C7"
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

OBJECTS = big_file_C7_c.o 

OLDOBJECTS =  et1188.o et1188d.o et1189.o et1189d.o et1187.o et1187d.o da1186.o \
	da1186d.o ev1185.o ev1185d.o ev1170.o ev1170d.o ev1169.o ev1169d.o \
	ev1168.o ev1168d.o kl1173.o kl1173d.o kl1171.o kl1171d.o ev1167.o \
	ev1167d.o ev1166.o ev1166d.o ev1184.o ev1184d.o ev1165.o ev1165d.o \
	ev1164.o ev1164d.o ev1163.o ev1163d.o ev1162.o ev1162d.o ev1161.o \
	ev1161d.o kl1182.o kl1182d.o kl1181.o kl1181d.o ev1172.o ev1172d.o \
	ev1160.o ev1160d.o ev1159.o ev1159d.o ki1178.o ki1178d.o ki1179.o \
	ki1179d.o ev1158.o ev1158d.o ev1157.o ev1157d.o ki1177.o ki1177d.o \
	ki1176.o ki1176d.o ki1183.o ki1183d.o kl1180.o kl1180d.o kl1175.o \
	kl1175d.o uc1174.o uc1174d.o 

all: Cobj7.o

Cobj7.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj7.o $(OBJECTS)
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

