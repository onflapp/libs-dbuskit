#
# GNUmakefile for DBusKit
#

ifeq ($(GNUSTEP_MAKEFILES),)
 GNUSTEP_MAKEFILES := $(shell gnustep-config --variable=GNUSTEP_MAKEFILES 2>/dev/null)
  ifeq ($(GNUSTEP_MAKEFILES),)
    $(warning )
    $(warning Unable to obtain GNUSTEP_MAKEFILES setting from gnustep-config!)
    $(warning Perhaps gnustep-make is not properly installed,)
    $(warning so gnustep-config is not in your PATH.)
    $(warning )
    $(warning Your PATH is currently $(PATH))
    $(warning )
  endif
endif

ifeq ($(GNUSTEP_MAKEFILES),)
  $(error You need to set GNUSTEP_MAKEFILES before compiling!)
endif

include $(GNUSTEP_MAKEFILES)/common.make

# config.make will be generated by configure (see GNUmakefile.postamble)
-include config.make
-include GNUmakefile.preamble


PACKAGE_NAME = dbuskit
PACKAGE_VERSION = 0.2
SVN_MODULE_NAME = dbuskit
SVN_BASE_URL = svn+ssh://svn.gna.org/svn/gnustep/libs

#No parallel building
GNUSTEP_USE_PARALLEL_AGGREGATE=no

#DBusKit Framework
SUBPROJECTS = Source \
              Tools

ifeq ($(strip $(BUILD_GLOBAL_MENU_BUNDLE)),1)
# SUBPROJECTS += Bundles/DBusMenu
endif

ifeq ($(strip $(BUILD_NOTIFICATION_BUNDLE)),1)
SUBPROJECTS += Bundles/DKUserNotification
endif


MAKEINFO = $(shell which makeinfo)
TEXI2PDF = $(shell which texi2pdf)
TEXI2HTML = $(shell which texi2html)

ifneq ($(strip $(MAKEINFO)),)
ifneq ($(strip $(TEXI2PDF)),)
ifneq ($(strip $(TEXI2HTML)),)
SUBPROJECTS += Documentation
endif
endif
endif
#
# Makefiles
#
-include GNUmakefile.preamble


ifeq ($(test), yes)
#Test Bundle
SUBPROJECTS += Tests
endif

include $(GNUSTEP_MAKEFILES)/aggregate.make
-include GNUmakefile.postamble
