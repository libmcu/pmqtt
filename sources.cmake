# SPDX-License-Identifier: MIT

if(TARGET_PLATFORM STREQUAL coremqtt)
	list(APPEND PMQTT_SRCS ${CMAKE_CURRENT_LIST_DIR}/src/coremqtt.c)
else()
	message(WARN "No target specified. Building with dummy target")
	list(APPEND PMQTT_SRCS ${CMAKE_CURRENT_LIST_DIR}/src/dummy.c)
endif()

list(APPEND PMQTT_INCS ${CMAKE_CURRENT_LIST_DIR}/include)
