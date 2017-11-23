# conf.pri.  Generated from conf.pri.in by configure.

PREFIX = /usr/local
BINDIR = /usr/local/bin
DATADIR = /usr/local/share
MANPREFIX = /usr/local/share/man

QMAKE_CXXFLAGS +=  -g -O2

EXTERNAL_INCLUDES = /usr/local/include /usr/local/Cellar/libtorrent-rasterbar/1.1.5/include/libtorrent /usr/local/Cellar/libtorrent-rasterbar/1.1.5/include 
EXTERNAL_INCLUDES -= $$QMAKE_DEFAULT_INCDIRS
# added /usr/local/include due to Qt 5.7.0 bug on macOS
macx: EXTERNAL_INCLUDES += "/usr/local/include"
INCLUDEPATH += $$EXTERNAL_INCLUDES

EXTERNAL_LIBS = -L/usr/local/lib  -lz -L/usr/local/Cellar/libtorrent-rasterbar/1.1.5/lib -ltorrent-rasterbar -lboost_system -lboost_system 
EXTERNAL_LIBS -= $$QMAKE_DEFAULT_LIBDIRS
LIBS += $$EXTERNAL_LIBS

CONFIG +=  release
CONFIG -=  debug nogui systemd nowebui dbus usesystemqtsingleapplication

DEFINES +=  TORRENT_LINKING_SHARED BOOST_ASIO_ENABLE_CANCELIO BOOST_EXCEPTION_DISABLE BOOST_ASIO_HASH_MAP_BUCKETS=1021 TORRENT_USE_OPENSSL 
DEFINES -= 
