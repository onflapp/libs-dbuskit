#
# GNUmakefile - Generated by ProjectCenter
#

include $(GNUSTEP_MAKEFILES)/common.make

# DBUS headers and libs
include config.make

DBUS_SUBPROJECTS = Sources

#
# Public headers (will be installed)
#
DBUS_HEADER_FILES_DIR = Headers
DBUS_HEADER_FILES = \
		  DBUS.h \
		  DBUSConnection.h \
		  DBUSIntrospector.h \
		  DBUSMessage.h \
		  DBUSMessageCall.h \
		  DBUSMessageIterator.h \
		  DBUSMessagePort.h \
		  DBUSMessageReturn.h \
		  DBUSPortNameServer.h \
		  DBUSProxy.h \
		  DBUSServer.h

#
# Makefiles
#
-include GNUmakefile.preamble
include $(GNUSTEP_MAKEFILES)/aggregate.make

ifneq ($(test), no)
# Bundle
BUNDLE_NAME = DBUS
include $(GNUSTEP_MAKEFILES)/bundle.make

all:: ${BUNDLE_NAME}
	ukrun ${BUNDLE_NAME}.bundle

else
# Framework
FRAMEWORK_NAME = DBUS
VERSION = 0.1
include $(GNUSTEP_MAKEFILES)/framework.make
endif

-include GNUmakefile.postamble

config.make:
	sh config.sh
