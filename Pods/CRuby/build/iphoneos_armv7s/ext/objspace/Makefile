
SHELL = /bin/sh

# V=0 quiet, V=1 verbose.  other values don't work.
V = 0
Q1 = $(V:1=)
Q = $(Q1:0=@)
ECHO1 = $(V:1=@:)
ECHO = $(ECHO1:0=@echo)
NULLCMD = :

#### Start of system configuration section. ####
top_srcdir = /Users/hiro/Library/Caches/CocoaPods/Pods/External/CRuby/193c1c8340a477e394e63f996e6fccdb/ruby
srcdir = $(top_srcdir)/ext/objspace
topdir = ../..
hdrdir = $(top_srcdir)/include
arch_hdrdir = $(extout)/include/$(arch)
PATH_SEPARATOR = :
VPATH = $(srcdir):$(arch_hdrdir)/ruby:$(hdrdir)/ruby:$(topdir):$(top_srcdir)
RUBYLIB =
RUBYOPT = -
prefix = $(DESTDIR)/usr/local
rubysitearchprefix = $(rubylibprefix)/$(sitearch)
rubyarchprefix = $(rubylibprefix)/$(arch)
rubylibprefix = $(libdir)/$(RUBY_BASE_NAME)
exec_prefix = $(prefix)
vendorarchhdrdir = $(vendorhdrdir)/$(sitearch)
sitearchhdrdir = $(sitehdrdir)/$(sitearch)
rubyarchhdrdir = $(rubyhdrdir)/$(arch)
vendorhdrdir = $(rubyhdrdir)/vendor_ruby
sitehdrdir = $(rubyhdrdir)/site_ruby
rubyhdrdir = $(includedir)/$(RUBY_VERSION_NAME)
vendorarchdir = $(vendorlibdir)/$(sitearch)
vendorlibdir = $(vendordir)/$(ruby_version)
vendordir = $(rubylibprefix)/vendor_ruby
sitearchdir = $(sitelibdir)/$(sitearch)
sitelibdir = $(sitedir)/$(ruby_version)
sitedir = $(rubylibprefix)/site_ruby
rubyarchdir = $(rubylibdir)/$(arch)
rubylibdir = $(rubylibprefix)/$(ruby_version)
sitearchincludedir = $(includedir)/$(sitearch)
archincludedir = $(includedir)/$(arch)
sitearchlibdir = $(libdir)/$(sitearch)
archlibdir = $(libdir)/$(arch)
ridir = $(datarootdir)/$(RI_BASE_NAME)
mandir = $(datarootdir)/man
localedir = $(datarootdir)/locale
libdir = $(exec_prefix)/lib
psdir = $(docdir)
pdfdir = $(docdir)
dvidir = $(docdir)
htmldir = $(docdir)
infodir = $(datarootdir)/info
docdir = $(datarootdir)/doc/$(PACKAGE)
oldincludedir = $(DESTDIR)/usr/include
includedir = $(SDKROOT)$(prefix)/include
localstatedir = $(prefix)/var
sharedstatedir = $(prefix)/com
sysconfdir = $(prefix)/etc
datadir = $(datarootdir)
datarootdir = $(prefix)/share
libexecdir = $(exec_prefix)/libexec
sbindir = $(exec_prefix)/sbin
bindir = $(exec_prefix)/bin
archdir = $(rubyarchdir)


CC = clang -arch armv7s
CXX = clang++ -arch armv7s
LIBRUBY = $(LIBRUBY_A)
LIBRUBY_A = lib$(RUBY_SO_NAME)-static.a
LIBRUBYARG_SHARED = 
LIBRUBYARG_STATIC = -l$(RUBY_SO_NAME)-static -framework CoreFoundation
empty =
OUTFLAG = -o $(empty)
COUTFLAG = -o $(empty)

RUBY_EXTCONF_H = extconf.h
cflags   =  $(optflags) $(debugflags) $(warnflags)
cxxflags =  $(optflags) $(debugflags) $(warnflags)
optflags = -O3 -fno-fast-math
debugflags = -ggdb3
warnflags = -Wall -Wextra -Wno-unused-parameter -Wno-parentheses -Wno-long-long -Wno-missing-field-initializers -Wunused-variable -Wpointer-arith -Wwrite-strings -Wdeclaration-after-statement -Wshorten-64-to-32 -Wimplicit-function-declaration -Wdivision-by-zero -Wdeprecated-declarations -Wextra-tokens
CCDLFLAGS = 
CFLAGS   = $(CCDLFLAGS) -pipe -Os -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS10.1.sdk -miphoneos-version-min=7.0 -I/Users/hiro/Library/Caches/CocoaPods/Pods/External/CRuby/193c1c8340a477e394e63f996e6fccdb/build/iphoneos_armv7s/include -fvisibility=hidden $(ARCH_FLAG)
INCFLAGS = -I. -I$(arch_hdrdir) -I$(hdrdir) -I$(srcdir) -I$(topdir) -I$(top_srcdir)
DEFS     = 
CPPFLAGS = -DRUBY_EXTCONF_H=\"$(RUBY_EXTCONF_H)\" -pipe -Os -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS10.1.sdk -miphoneos-version-min=7.0 -I/Users/hiro/Library/Caches/CocoaPods/Pods/External/CRuby/193c1c8340a477e394e63f996e6fccdb/build/iphoneos_armv7s/include -D_XOPEN_SOURCE -D_DARWIN_C_SOURCE -D_DARWIN_UNLIMITED_SELECT -D_REENTRANT $(DEFS) $(cppflags)
CXXFLAGS = $(CCDLFLAGS) -fvisibility-inline-hidden $(ARCH_FLAG)
ldflags  = -L. -pipe -Os -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS10.1.sdk -miphoneos-version-min=7.0 -I/Users/hiro/Library/Caches/CocoaPods/Pods/External/CRuby/193c1c8340a477e394e63f996e6fccdb/build/iphoneos_armv7s/include -L/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS10.1.sdk/usr/lib -lSystem -fstack-protector -L/usr/local/lib
dldflags = -Wl,-multiply_defined,suppress 
ARCH_FLAG = 
DLDFLAGS = $(ldflags) $(dldflags) $(ARCH_FLAG)
LDSHARED = $(CC) -dynamic -bundle
LDSHAREDXX = $(CXX) -dynamic -bundle
AR = ar
EXEEXT = 

RUBY_INSTALL_NAME = $(RUBY_BASE_NAME)
RUBY_SO_NAME = ruby
RUBYW_INSTALL_NAME = 
RUBY_VERSION_NAME = $(RUBY_BASE_NAME)-$(ruby_version)
RUBYW_BASE_NAME = rubyw
RUBY_BASE_NAME = ruby

arch = -darwin
sitearch = $(arch)
ruby_version = 2.3.0
ruby = /usr/local/opt/rbenv/versions/2.2.4/bin/ruby --disable=gems -I/Users/hiro/Library/Caches/CocoaPods/Pods/External/CRuby/193c1c8340a477e394e63f996e6fccdb/build/iphoneos_armv7s -r-darwin-fake  -I'$(topdir)'
RUBY = $(ruby)
ruby_headers = $(hdrdir)/ruby.h $(hdrdir)/ruby/ruby.h $(hdrdir)/ruby/defines.h $(hdrdir)/ruby/missing.h $(hdrdir)/ruby/intern.h $(hdrdir)/ruby/st.h $(hdrdir)/ruby/subst.h $(arch_hdrdir)/ruby/config.h $(RUBY_EXTCONF_H)

RM = rm -f
RM_RF = $(RUBY) -run -e rm -- -rf
RMDIRS = rmdir -p
MAKEDIRS = mkdir -p
INSTALL = /usr/bin/install -c
INSTALL_PROG = $(INSTALL) -m 0755
INSTALL_DATA = $(INSTALL) -m 644
COPY = cp
TOUCH = exit >

#### End of system configuration section. ####

preload = 

libpath = . $(topdir)
LIBPATH =  -L. -L$(topdir)
DEFFILE = 

CLEANFILES = mkmf.log
DISTCLEANFILES = 
DISTCLEANDIRS = 

extout = $(topdir)/.ext
extout_prefix = $(extout)$(target_prefix)/
target_prefix = 
LOCAL_LIBS = 
LIBS =   -lpthread -ldl -lobjc 
ORIG_SRCS = object_tracing.c objspace.c objspace_dump.c
SRCS = $(ORIG_SRCS) 
OBJS = object_tracing.o objspace.o objspace_dump.o
HDRS = $(srcdir)/objspace.h
TARGET = objspace
TARGET_NAME = objspace
TARGET_ENTRY = Init_$(TARGET_NAME)
DLLIB = $(TARGET).bundle
EXTSTATIC = true
STATIC_LIB = $(TARGET).a

TIMESTAMP_DIR = $(extout)/.timestamp
BINDIR        = $(extout)/bin
RUBYCOMMONDIR = $(extout)/common
RUBYLIBDIR    = $(RUBYCOMMONDIR)$(target_prefix)
RUBYARCHDIR   = $(extout)/$(arch)$(target_prefix)
HDRDIR        = $(extout)/include/ruby$(target_prefix)
ARCHHDRDIR    = $(extout)/include/$(arch)/ruby$(target_prefix)

TARGET_SO     = $(RUBYARCHDIR)/$(DLLIB)
CLEANLIBS     = $(RUBYARCHDIR)/$(TARGET).bundle 
CLEANOBJS     = *.o  *.bak

all:    install
static: $(STATIC_LIB)
.PHONY: all install static install-so install-rb
.PHONY: clean clean-so clean-static clean-rb

clean-static::
clean-rb-default::
clean-rb::
clean-so::
clean: clean-so clean-static clean-rb-default clean-rb
		-$(Q)$(RM) $(CLEANLIBS) $(CLEANOBJS) $(CLEANFILES) .*.time

distclean-rb-default::
distclean-rb::
distclean-so::
distclean-static::
distclean: clean distclean-so distclean-static distclean-rb-default distclean-rb
		-$(Q)$(RM) Makefile $(RUBY_EXTCONF_H) conftest.* mkmf.log
		-$(Q)$(RM) core ruby$(EXEEXT) *~ $(DISTCLEANFILES)
		-$(Q)$(RMDIRS) $(DISTCLEANDIRS) 2> /dev/null || true

realclean: distclean
install: install-so install-rb

install-so: $(RUBYARCHDIR)/$(DLLIB)
clean-so::
	-$(Q)$(RM) $(RUBYARCHDIR)/$(DLLIB) $(TIMESTAMP_DIR)/.RUBYARCHDIR.time
	-$(Q)$(RMDIRS) $(RUBYARCHDIR) 2> /dev/null || true
clean-static::
	-$(Q)$(RM) $(STATIC_LIB)
install-rb: pre-install-rb install-rb-default
install-rb-default: pre-install-rb-default
pre-install-rb: Makefile
pre-install-rb-default: Makefile
pre-install-rb-default:
	@$(NULLCMD)
$(TIMESTAMP_DIR)/.RUBYARCHDIR.time:
	$(Q) $(MAKEDIRS) $(@D) $(RUBYARCHDIR)
	$(Q) $(TOUCH) $@

site-install: site-install-so site-install-rb
site-install-so: install-so
site-install-rb: install-rb

.SUFFIXES: .c .m .cc .mm .cxx .cpp .o .S

.cc.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $<

.cc.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $<

.mm.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $<

.mm.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $<

.cxx.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $<

.cxx.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $<

.cpp.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $<

.cpp.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $<

.c.o:
	$(ECHO) compiling $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<

.c.S:
	$(ECHO) translating $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -S $<

.m.o:
	$(ECHO) compiling $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<

.m.S:
	$(ECHO) translating $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -S $<

$(RUBYARCHDIR)/$(DLLIB): $(OBJS) Makefile $(TIMESTAMP_DIR)/.RUBYARCHDIR.time
	$(ECHO) linking shared-object $(DLLIB)
	-$(Q)$(RM) $(@)
	$(Q) $(LDSHARED) -o $@ $(OBJS) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)
	$(Q) $(POSTLINK)

$(STATIC_LIB): $(OBJS)
	-$(Q)$(RM) $(@)
	$(ECHO) linking static-library $(@)
	$(Q) $(AR) cru $@ $(OBJS)
	-$(Q)ranlib $(@) 2> /dev/null || true

###
$(OBJS): $(RUBY_EXTCONF_H)

# AUTOGENERATED DEPENDENCIES START
object_tracing.o: $(RUBY_EXTCONF_H)
object_tracing.o: $(arch_hdrdir)/ruby/config.h
object_tracing.o: $(hdrdir)/ruby/debug.h
object_tracing.o: $(hdrdir)/ruby/defines.h
object_tracing.o: $(hdrdir)/ruby/encoding.h
object_tracing.o: $(hdrdir)/ruby/intern.h
object_tracing.o: $(hdrdir)/ruby/io.h
object_tracing.o: $(hdrdir)/ruby/missing.h
object_tracing.o: $(hdrdir)/ruby/oniguruma.h
object_tracing.o: $(hdrdir)/ruby/ruby.h
object_tracing.o: $(hdrdir)/ruby/st.h
object_tracing.o: $(hdrdir)/ruby/subst.h
object_tracing.o: $(top_srcdir)/include/ruby.h
object_tracing.o: $(top_srcdir)/internal.h
object_tracing.o: object_tracing.c
object_tracing.o: objspace.h
objspace.o: $(RUBY_EXTCONF_H)
objspace.o: $(arch_hdrdir)/ruby/config.h
objspace.o: $(hdrdir)/ruby/defines.h
objspace.o: $(hdrdir)/ruby/encoding.h
objspace.o: $(hdrdir)/ruby/intern.h
objspace.o: $(hdrdir)/ruby/io.h
objspace.o: $(hdrdir)/ruby/missing.h
objspace.o: $(hdrdir)/ruby/oniguruma.h
objspace.o: $(hdrdir)/ruby/re.h
objspace.o: $(hdrdir)/ruby/regex.h
objspace.o: $(hdrdir)/ruby/ruby.h
objspace.o: $(hdrdir)/ruby/st.h
objspace.o: $(hdrdir)/ruby/subst.h
objspace.o: $(top_srcdir)/gc.h
objspace.o: $(top_srcdir)/include/ruby.h
objspace.o: $(top_srcdir)/internal.h
objspace.o: $(top_srcdir)/node.h
objspace.o: objspace.c
objspace_dump.o: $(RUBY_EXTCONF_H)
objspace_dump.o: $(arch_hdrdir)/ruby/config.h
objspace_dump.o: $(hdrdir)/ruby/debug.h
objspace_dump.o: $(hdrdir)/ruby/defines.h
objspace_dump.o: $(hdrdir)/ruby/encoding.h
objspace_dump.o: $(hdrdir)/ruby/intern.h
objspace_dump.o: $(hdrdir)/ruby/io.h
objspace_dump.o: $(hdrdir)/ruby/missing.h
objspace_dump.o: $(hdrdir)/ruby/oniguruma.h
objspace_dump.o: $(hdrdir)/ruby/ruby.h
objspace_dump.o: $(hdrdir)/ruby/st.h
objspace_dump.o: $(hdrdir)/ruby/subst.h
objspace_dump.o: $(hdrdir)/ruby/thread_native.h
objspace_dump.o: $(top_srcdir)/ccan/check_type/check_type.h
objspace_dump.o: $(top_srcdir)/ccan/container_of/container_of.h
objspace_dump.o: $(top_srcdir)/ccan/list/list.h
objspace_dump.o: $(top_srcdir)/ccan/str/str.h
objspace_dump.o: $(top_srcdir)/gc.h
objspace_dump.o: $(top_srcdir)/include/ruby.h
objspace_dump.o: $(top_srcdir)/internal.h
objspace_dump.o: $(top_srcdir)/method.h
objspace_dump.o: $(top_srcdir)/node.h
objspace_dump.o: $(top_srcdir)/ruby_atomic.h
objspace_dump.o: $(top_srcdir)/thread_pthread.h
objspace_dump.o: $(top_srcdir)/vm_core.h
objspace_dump.o: $(top_srcdir)/vm_debug.h
objspace_dump.o: $(top_srcdir)/vm_opts.h
objspace_dump.o: objspace.h
objspace_dump.o: objspace_dump.c
objspace_dump.o: id.h
# AUTOGENERATED DEPENDENCIES END
