ifdef DEFINE_VRE
	VRE = "[=] Hello VRE!"
else
endif

ifeq ($(OPT), define)
	VRE ?= "[?=] Hello define!"
endif

ifeq ($(OPT), add)
	VRE += "[+=] add!"
endif

ifeq ($(OPT), recover)
	VRE := "[:=] Hello World! Recover!"
endif

all:
	@echo ${VRE}
