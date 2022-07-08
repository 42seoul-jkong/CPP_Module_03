# Any copyright is dedicated to the Public Domain.
# https://creativecommons.org/publicdomain/zero/1.0/

TARGET = traps.out
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

include ../template.mk

ClapTrap.cpp: ClapTrap.hpp
ScavTrap.cpp: ClapTrap.hpp ScavTrap.hpp
FragTrap.cpp: ClapTrap.hpp FragTrap.hpp
main.cpp: ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
