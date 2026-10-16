TARGET := SwitchCraftNX
BUILD := build
SOURCES := source
ARCH := -march=armv8-a -mtune=cortex-a57 -mtp=soft

CFLAGS := -g -Wall -O2 -ffunction-sections $(ARCH) -D__SWITCH__
CXXFLAGS := $(CFLAGS) -fno-rtti -fno-exceptions
ASFLAGS := -g $(ARCH)
LDFLAGS = -specs=$(DEVKITPRO)/libnx/switch.specs -g
LIBS := -lnx

include $(DEVKITPRO)/libnx/switch_rules
