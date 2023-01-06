# SPDX-License-Identifier: MIT

ifneq ($(PMQTT_ROOT),)
pmqtt-basedir := $(PMQTT_ROOT)/
endif

ifeq ($(TARGET_PLATFORM), coremqtt)
PMQTT_SRCS += $(pmqtt-basedir)src/coremqtt.c
else
$(warning "No target specified. Building with dummy target.")
PMQTT_SRCS += $(pmqtt-basedir)src/dummy.c
endif

PMQTT_INCS := $(pmqtt-basedir)include
