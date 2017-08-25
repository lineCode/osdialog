# osdialog

A cross platform wrapper for OS dialogs like file save, open, message boxes, inputs, color picking, etc.

Currently supports Windows and GTK2 on Linux.

## Using

The Makefile is only for building the osdialog test binary.
You don't need to use it for your application.
Simply add osdialog to the include directory, and add the appropriate `osdialog_*.c/.m` to your application's source files.