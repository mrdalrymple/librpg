cmake_minimum_required (VERSION 3.9)

set (EXEC_NAME rpgcli)
set (RPG_LIB_NAME rpg)

set (EXEC_SOURCES
  source/main.cpp
  source/arguments.cpp
)

add_executable(${EXEC_NAME}
  ${EXEC_SOURCES}
)

target_include_directories(${EXEC_NAME}
  PUBLIC
    include
)

target_link_libraries (${EXEC_NAME} LINK_PUBLIC ${RPG_LIB_NAME})
