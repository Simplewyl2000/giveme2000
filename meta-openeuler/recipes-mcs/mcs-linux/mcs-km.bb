### Descriptive metadata: SUMMARY,DESCRITPION, HOMEPAGE, AUTHOR, BUGTRACKER
SUMMARY = "The external linux kernel module of openEuler Embedded's MCS feature"
DESCRIPTION = "${SUMMARY}"
AUTHOR = ""
HOMEPAGE = "https://gitee.com/openeuler/mcs"
BUGTRACKER = "https://gitee.com/openeuler/yocto-meta-openeuler"


### License metadata
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/files/common-licenses/GPL-2.0-only;md5=801f80980d171dd6425610833a22dbe6"


### Inheritance and includes if needed
inherit module
require mcs-resources-overlay.inc

### Build metadata: SRC_URI, SRCDATA, S, B, FILESEXTRAPATHS....
PV = "0.0.1"
OPENEULER_FETCH = "disable"
SRC_URI += " \
    file://mcs/mcs_km \
    "
S = "${WORKDIR}/mcs/mcs_km"

do_fetch[depends] += "mcs-linux:do_fetch"

# The inherit of module.bbclass will automatically name module packages with
# "kernel-module-" prefix as required by the oe-core build environment.

RPROVIDES_${PN} += "kernel-module-mcs-km"
